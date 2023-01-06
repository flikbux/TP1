//
// Created by Elie on 05/01/2023.
//

#include "emprunt.h"

Emprunt::Emprunt(Date date, int ISBN, std::string identifiant) {
    _date = date;
    _ISBN = ISBN;
    _identifiant = identifiant;
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