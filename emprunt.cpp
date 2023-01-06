//
// Created by Elie on 05/01/2023.
//

#include "emprunt.h"

Emprunt::Emprunt(Date date, Livre livre, Lecteur lecteur) {
    _date = date;
    _ISBN = livre.GetISBN();
    _identifiant = lecteur.GetIdentifiant();

}

Date Emprunt::GetDate() {
    return _date;
}

int Emprunt::GetISBN() {
    return _ISBN;
}

std::string Emprunt::GetIdentifiant() {
    return _identifiant;
}