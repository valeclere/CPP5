#include "Chaine.hpp"
#include <cstring>

Chaine::Chaine(): capacite(-1), tab(NULL){}

Chaine::Chaine(const char * inCS){
    capacite=strlen(inCS);
    tab = new char[capacite];
    strcpy(tab,inCS);
}

Chaine::Chaine(int inCapacite){
    capacite=inCapacite;
    tab = new char[inCapacite];
    tab[0]='\0'; /* pour que la chaine de caractère soit vide */
}


Chaine::Chaine(const Chaine & s1){
    capacite=s1.getCapacite();
    tab=new char[capacite];
    strcpy(tab,s1.c_str());
    std::cout << "Constructeur de copie appelé" << std::endl;
}


Chaine::~Chaine(){
    delete [] tab;
}

char Chaine::getCapacite() const{
    return capacite;
}

char* Chaine::c_str() const{
    return tab;
}


void Chaine::afficher(std::ostream &flux) const{
    flux << tab;
}


void Chaine::afficher() const{
    std::cout << tab;
}

void afficherParValeur(Chaine s1){
    s1.afficher();
}

void afficherParReference(const Chaine &s1){
    s1.afficher();
}

Chaine& Chaine::operator=(const Chaine &uC){
    if (&uC!=this){
        delete [] tab;
        capacite=uC.capacite;
        if (capacite){
            tab=new char[capacite];
            strcpy(tab,uC.tab);
        }
    }
    return *this;
}


char& Chaine::operator[](int k){
    return tab[k];
}

