//
// Created by Elie on 05/01/2023.
//

#ifndef TP1_EMPRUNT_H
#define TP1_EMPRUNT_H

#include "date.h"
#include "livre.h"
#include "lecteur.h"

#include "iostream"
#include "string"

class Emprunt {
private:
    Date _date;
    int _ISBN;
    std::string _identifiant;

public:
    Emprunt(Date date, Lecteur lecteur, Livre livre);

    Date GetDate();
    int GetISBN();
    std::string GetIdentifiant();
};


#endif //TP1_EMPRUNT_H
