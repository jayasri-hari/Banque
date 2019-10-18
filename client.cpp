#include <iostream>
#include <cmath> 
#include "client.h"
#include "/usr/include/mysql/mysql.h" // pour utiliser mysql.h

using namespace std;


//Methodes
 
   void Client::inscription()
   {
	cout << "Inscription :" << endl;

	cout<< "Votre nom : " << endl;
	cin >> this -> nom;

	cout<< "Votre prénom : " << endl;
	cin >> this -> prenom;

	cout << "Votre numéro de la carte d'identité :"<< endl;
	cin >> this -> num_cin;

	cout << "Votre numéro de téléphone : "<< endl;
	cin >> this -> num_tel;

	cout << "Creer votre mot de passe : "<< endl;
	cin >> this -> code;
   }


   void Client::connexion()
   {
     int code;
     
     cout << " Connectez-vous !:" << endl;

     cout << "Insérez votre carte" << endl;

	 cout << "Mot de passe : " <<endl;
	 cin >> code;
 
    while (code != this -> code)
     { 
        cout << "Bienvenue! " << endl;
        cout << "Désolé "<< endl ;
        cin >> code ;
             }  
 
    /* if(code != this -> code) {   
    // cout <<"Incorrect"<< endl;
     
    }*/

	
   } 
	


   

 





























    

