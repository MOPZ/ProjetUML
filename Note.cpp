//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Projet UML
//  @ File Name : Note.cpp
//  @ Date : 08/04/2014
//  @ Author : Matteo Gulino & Paul Maupas
//
//

//Bonjour

#include "Note.h"

ostream & operator<< (ostream & os, const Note & n)
{
    os << "(" << n._CE << ", " << n._DE << ", " << n._PROJET << ", " << n._TP << ")";
	return os;
}

istream & operator>> (istream & is, const Note & n)
{
    is >> n._CE;
    is >> n._DE;
    is >> n._PROJET;
    is >> n._TP;
    return is;
}


void Note::ajoutnote() {

}

double Note::CalculMoyenne(int double, int double, int double, int double, int double, int double, int double, int double) {

}

