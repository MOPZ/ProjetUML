#include "Eleve.h"

Eleve::Eleve(string Nom, string Prenom, int Age, int Promotion, Prof Tuteur, double MoyenneGene): _Nom(Nom), _Prenom(Prenom), _Age(Age), _Promotion(Promotion), _Tuteur(Tuteur), _MoyenneGene(0)
{

}

//Surcharge Opérateur <<
ostream & operator<<(ostream & os, const Eleve & e)
{
    os << "Nom : " << e._Nom << endl
    << "Prenom : " << e._Prenom << endl
    << "Age : " << e._Age << endl
    << "Promotion : " << e._Promotion << endl
    << "Tuteur : " << e._Tuteur << endl
    << "Moyenne Generale : " << e._MoyenneGene << endl;
    return os;
}

//Surcharge Opérateur >>
istream & operator>>(ostream & is, const Eleve & e)
{
    is >> e._Nom;
    is >> e._Prenom;
    is >> e._Age;
    is >> e._Promotion;
    is >> e._Tuteur;
    is >> e._MoyenneGene;

    return is;
}

//Destructeur
~Eleve::Eleve{}
