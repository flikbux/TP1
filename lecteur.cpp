//
// Created by Elie on 05/01/2023.
//

#include "lecteur.h"

Lecteur::Lecteur(std::string identifiant, std::string nom, std::string prenom) {
    _identifiant = identifiant;
    _nom = nom;
    _prenom = prenom;
}

std::string Lecteur::GetIdentifiant() {
    return _identifiant;
}

std::string Lecteur::GetNom() {
    return _nom;
}

std::string Lecteur::GetPrenom() {
    return _prenom;
}

std::vector<int> Lecteur::GetISBNList() {
    return _ISBN_list;
}

void Lecteur::AddISBNToList(int ISBN) {
    _ISBN_list.push_back(ISBN);
}

void Lecteur::RmISBNFromList(int ISBN) {
    std::vector<int>::iterator
    index = std::find(_ISBN_list.begin(), _ISBN_list.end(), ISBN);
    _ISBN_list.erase(index);
}

void Lecteur::Emprunter(Date& date, Livre& livre) {
    Emprunt emprunt = Emprunt(date, *this, livre);
    _emprunt_list.push_back(emprunt);
}

void Lecteur::Restitutuer(Date& date, Livre& livre) {
    Restitution(date, *this, livre);
}

std::ostream& operator<<(std::ostream os, Lecteur& lecteur){
    os << "[M/MMe] " << lecteur.GetNom() << lecteur.GetPrenom() << ""
}