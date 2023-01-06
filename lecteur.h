//
// Created by Elie on 05/01/2023.
//

#ifndef TP1_LECTEUR_H
#define TP1_LECTEUR_H

#include "iostream"
#include "string"
#include "vector"


class Lecteur {
private:
    std::string _identifiant;
    std::string _nom;
    std::string _prenom;
    std::vector<std::string> _ISBN_list;

public:
    Lecteur(std::string identifiant, std::string nom, std::string prenom);

    std::string GetIdentifiant();
    std::string GetNom();
    std::string GetPrenom();
    std::vector<std::string> GetISBNList();

};


#endif //TP1_LECTEUR_H
