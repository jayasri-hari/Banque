#include <iostream>
#include <iomanip>
#include "client.h"
#include "compte.h"

using namespace std;

int main() 
{
   
   int j;
   Client c;
   Compte i;


   cout << " Bienvenue chez LCL \n"<< endl;
   cout << "1) Inscrivez-vous  \n" << endl;
   cout << "2) Connectez-vous \n" << endl;
   cout << "3) Quitter \n" << endl;
   cin >> j;

    switch(j) 
   {
      case 1:
          c.inscription();
          c.connexion();
          i.afficher();


         break;

      case 2:
          c.connexion();
          i.afficher();
          break;

      default:
         break;


   }

  return 0;

}
