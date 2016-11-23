#ifndef DICTNODE_H
#define DICTNODE_H

#include <../Descargas/aleph/tpl_tree_node.H>
#include <../Descargas/aleph/tpl_dynArray.H>
using namespace std;

class Cnode : public Tree_Node<char>
{
 public:

 /** Filtrado de Caracteres **/
 inline char filter_char(const char c)
 {
  char ret = c;
  switch (c)
  {
   case 'á':
    case 'à':
    case 'ä':
   case 'â':
   case 'ã':
   case 'Á':
   case 'À':
   case 'Ä':
   case 'Â':
   case 'Ã': ret = 'a'; break;
   case 'é':
   case 'è':
   case 'ë':
   case 'ê':
   case 'É':
   case 'È':
   case 'Ë':
   case 'Ê': ret = 'e'; break;
   case 'í':
   case 'ì':
   case 'ï':
   case 'î':
   case 'Í':
   case 'Ì':
   case 'Ï':
   case 'Î': ret = 'i'; break;
   case 'ó':
   case 'ò':
   case 'ö':
   case 'ô':
   case 'õ':
   case 'Ó':
   case 'Ò':
   case 'Ö':
   case 'Ô':
   case 'Õ': ret = 'o'; break;
   case 'ú':
   case 'ù':
   case 'ü':
   case 'û':
   case 'Ú':
   case 'Ù':
   case 'Ü':
   case 'Û': ret = 'u'; break;
   case 'Ç':
    case 'ç': ret = 'c'; break;
   case 'ñ':
   case 'Ñ': ret = 'n'; break;
   case '$': ret = '$'; break;
    case '-': ret = '-'; break;

   default:
    if((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'))
     {
     ret = tolower(c); break;
    }
    else
     {
      //throw std :: invalid_argument("Invalid character");
        ret = '\0';
      break;
    }
    }
 return ret;
 }

 /** 2.1 Constructor **/
 Cnode(const char c)
 {
  wchar_t caracter;
  caracter = filter_char(c);
  char & ref = this->get_key();
  ref = caracter;
 }

 /** 2.2 Observador **/
 char symbol() const noexcept
 {
    return (this->get_key());
 }

 /** 2.4 Consulta de hijos **/
 DynList<Cnode *> children() const
 {
  DynList<Cnode *> Lista_Hijos;
  this->for_each_child ([&](Tree_Node * itr)
  {
   Cnode * ptr_hijo = static_cast<Cnode *>(itr);
   Lista_Hijos.append(ptr_hijo);
  });
  return Lista_Hijos;
 }

 /** Representacion de un arbol como cadena **/
  string to_str() const
  {
    string ret(1, symbol());
    children().for_each([&ret] (Cnode * p) { ret += "(" + p->to_str() + ")"; });
    return ret;
  }

private:

  struct W
  {
    const string operator () (Cnode * p) const
    {
      char c = p->symbol();
      return c != '$' ? string(1, p->symbol()) : string("\\$");
    }
  };

public:

 /* void ntreepic(ostream & out) const
  {
    generate_tree<Cnode, W>(const_cast<Cnode*>(this), out);
  }*/

 /** 2.7 Prueba de palabra **/
 bool is_end_word() const noexcept
 {
  bool b = false;
  DynList<Cnode *> Lista_Hijos = this->children();

  Lista_Hijos.for_each([&](auto itr)
  {
   if(itr->get_key() == '$')
    b = true;
  });

  return b;
 }

 /** 2.6 Marcado de Palabra **/
 bool mark_end_word()
 {
  bool b = false;
  DynList<Cnode *> Lista_Hijos = this->children();

  Lista_Hijos.for_each([&](auto itr)
  {
   if(itr->get_key() == '$' )
   {
    b = true;
   }
  });

  if(b == false)
  {
   Cnode * fin_palabra = new Cnode('$');
   this->insert_child(fin_palabra);
  }

 return not b;
 }

 /** 2.5 Busqueda del hijo **/
 Cnode * search_child(const char c) const noexcept
 {
  Cnode* aux_ptr = nullptr;
  DynList<Cnode *> Lista_Hijos = this->children();

  Lista_Hijos.for_each([&](auto itr)
  {
   if(itr->get_key() == c)
   {
    aux_ptr = itr;
   }
  });
  return aux_ptr;
 }

 /** 2.8 Busquda de prefijo **/
 tuple<const Cnode* , const char*> search_prefix(const char * prefix) const
 {
  Cnode* hijo = this->search_child(*prefix);
  if (*prefix != '\0' and hijo!= nullptr)
   return hijo->search_prefix(prefix + 1);
  else
   return (make_tuple(this, prefix));
  }

 /** 2.7 Busqueda de palabra **/
 bool contains(const string & word) const noexcept
 {
  string _word = word;
  Cnode * ptr = nullptr;

  for(int i=0; i<word.length(); i++)
  {
   _word[i] = ptr->filter_char(_word[i]);
  }
delete []ptr;

  tuple< const Cnode *, const char *> ab;
  ab = search_prefix(_word.c_str());

  if (*get<1>(ab) == '\0')
  {
   if(get<0>(ab)->search_child('$') != nullptr)
   {
    return true;
   }
   else
    return false;
  }
  return false;
 }

 /** 2.3 Inserción de hijo **/
 Cnode * insert_child(Cnode * child)
 {
  DynList<Cnode*> list = this->children();
  for(DynList<Cnode*>::Iterator it(list); it.has_curr(); it.next())
   {
     if(it.get_curr()->get_key() == child->get_key())
     return nullptr;
   }
   this->insert_rightmost_child(child);

 return child;
 }

 /** 2.10 Insertar word **/
 bool insert_word(const string & word)
 {
  string _word = word;
  for(int i=0; i<word.length(); i++)
  {
   _word[i]=filter_char(_word[i]);
  }

 tuple< const Cnode *, const char *> ab;
 ab = search_prefix(_word.c_str());
 Cnode* node_insert = const_cast <Cnode*> (get<0>(ab));

 if(*(get<1>(ab))=='/0')
 {
  if((get<0>(ab)->search_child('$'))==nullptr)
  {
    node_insert->mark_end_word();
    return true;
  }
  else
    return false;
 }

 char * c= const_cast<char *> (get<1>(ab));
 try
 {
  while( *(c) != '\0' )
  {
   node_insert = node_insert->insert_child(new Cnode (*c));
   c++;
  }
  node_insert->mark_end_word();
  }
  catch(...)
  {
   throw invalid_argument("word contains an invalid character");
  }
 return true;
 }

 /** 2.11 Clonacion **/
 Cnode * clon() const
 {
  return clone_tree(const_cast<Cnode*>(this));
 }

 /** Destructor **/
 void destroy()
 {
     if(this == nullptr)
             return;

         if(this->is_root())
             destroy_tree(this);

         else{
             Cnode * root = static_cast<Cnode*>(this->get_parent());
             while(!root->is_root()){
                 root = static_cast<Cnode*>(root->get_parent());
             }

             destroy_tree(root);
         }
 }

 void words(string & str, DynArray<string> & a) const
   {
     if (symbol() == '$')
       {
     a.append(str);
     return;
       }

     str.push_back(symbol());

     for_each_child([&](auto c) { static_cast<Cnode *>(c)->words(str, a); });

     str.pop_back();
   }

   DynArray<string> words() const
   {
     DynArray<string> ret;
     string str;
     children().for_each([&str, &ret](auto p) { p->words(str, ret); });
     return ret;
   }

 void print_words() const
 {
  words().for_each([] (const string & w) { cout << w << endl; });
 }

 DynList<string> search_words(const string & prefix)
 {
 auto t = search_prefix(prefix.c_str());
 if (*get<1>(t) != '\0')
 return DynList<string>();
 return get<0>(t)->words().map([&prefix](auto s) { return prefix + s; });
 }

};

#endif // DICTNODE_H
