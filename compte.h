#ifndef COMPTE_H
#define COMPTE_H
#include <string>

using namespace std ;

class Compte 
 {
    private :
     int num_compte;
     long solde;
     int code_secret;

    public :
      Compte ();
      Compte (int num_compte, long solde, int code_secret);

      float crediter_compte();
      float crediter_autre_compte();
      float debiter();
      void consulter_rib();
      void virements();
      void commander_chequier();
      void afficher();
        
 };
#endif
