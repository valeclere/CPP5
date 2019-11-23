#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>
#include <vector>

class Chaine{
    int capacite;
    char * tab;

    public :
        Chaine();
        Chaine(const char *);
        ~Chaine();
        Chaine(int inCapacite);
        Chaine(const Chaine & s1);

        char* c_str() const;
        char getCapacite() const;
        void afficher(std::ostream &flux) const;
        void afficher() const;
        Chaine& operator=(const Chaine &uC);
        char& operator[](int k);
    
};

void afficherParValeur(Chaine s1);
void afficherParReference(const Chaine &s1);

#endif