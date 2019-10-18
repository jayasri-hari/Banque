#include <iostream>
#include <cmath> 
#include "compte.h"
#include </usr/include/mysql/mysql.h> // pour utiliser mysql.h


using namespace std;

 Compte::Compte() 
   {
      this -> solde = 0;
      this -> num_compte = 0;
   }


   float Compte::crediter_compte()
   {  
      float deposer;
      cout << "Entrer la somme à déposer : " << endl;
      cin >> deposer;

      this -> solde = this -> solde + deposer;
      cout << "Nouveau solde :" <<endl;
      cin >> solde;
   }
 
  //float Compte::crediter_autre_compte() {}        

   float Compte::debiter()
    {   
     float retirer;
     cout << "Vous voulez retier combien ? " << endl;
     cin >> retirer;

     this -> solde =    this -> solde - retirer;
     cout << "Nouveau solde :" <<endl;
     cin >> solde;
    }

  //void Compte::consulter_rib () {}


   void Compte::commander_chequier () 
    {
        int choix ;
        int quantite;

        if (choix == 1)
        {
           cout << "Combien de feuille de chèquier voulez vous commander : " << endl;
           cin >> quantite;
           cout << "Votre commande à bien été pris en charge !" << endl;
           cout << "Vous avez recevoir un chèque de " << quantite << " feuilles chez vous." << endl;
         }
  
        else if (choix == 0)
        {
           cout << "Vous avez quitté l'opération " << endl;
        }
  
     }



   void Compte::afficher()
  {
        int menu;
        Compte a;

     cout << "1) Déposer \n" << endl;
     cout << "2) Faire un retrait \n" << endl;
     cout << "3) Consulter votre compte \n" << endl;
     cout << "4) Consulter le RIB \n" << endl;
     cout << "5) Commander un chèquier \n" << endl; 
     cout << "6) Quitter \n" << endl;

    cin >> menu;

  switch(menu) 
   {
      case 1:
        a.crediter_compte();
        a.afficher();
        break;

      case 2:
         a.debiter_compte();
         a.afficher();
         break;

      case 3:
         a.consulter_compte();
         a.afficher();
         break;

      case 4:
         a.consulter_rib();
         a.afficher();
         break;

      case 5:
         a.commander_chequier();
         a.afficher();
         break;

      default:
         break;

    }

  }



     

   

