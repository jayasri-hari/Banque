#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <iostream>
#include <cmath>

using namespace std ;

class Client 
 {
   private :
    string nom;
    string prenom;
    int num_tel;
    int num_cin;
    int code;

   public :
     //constructeur
     /*Client();        
     Client(string nom, string prenom, int num_tel, int num_cin); */
     void inscription ();
     void connexion ();

 };
  
#endif //CLIENT_H
       
