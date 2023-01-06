//
// Created by Elie on 05/01/2023.
//

#ifndef TP1_BIBLIOTHEQUE_H
#define TP1_BIBLIOTHEQUE_H

#include "livre.h"
#include "emprunt.h"

#include "vector"
#include "string"
#include "auteur.h"
#include "lecteur.h"

class Bibliotheque {
private:
    std::vector<Livre> _livre_list;
    std::vector<Emprunt> _emprunt_list;
    std::vector<Auteur> _auteur_list;
    std::vector<Lecteur> _lecteur_list;
    std::string _nom_bibliotheque;
    std::string _adress;

public:
    Bibliotheque(std::string nom_biblioteque, std::string adress);

    std::vector<Livre> GetLivreList();
    std::vector<Emprunt> GetEmpruntList();
    std::vector<Auteur> GetAuteurList();
    std::vector<Lecteur> GetLecteurList();
    std::string GetNomBibliotheque();
    std::string GetAdress();

    void AddAuteur();
    void AddLivre();



};


#endif //TP1_BIBLIOTHEQUE_H
