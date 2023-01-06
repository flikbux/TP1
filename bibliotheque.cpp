//
// Created by Elie on 05/01/2023.
//

#include "bibliotheque.h"

Bibliotheque::Bibliotheque(std::string nom_biblioteque, std::string adress) {
    _nom_bibliotheque = nom_biblioteque;
    _adress = adress;
}

std::vector<Livre> Bibliotheque::GetLivreList() {
    return _livre_list;
}

std::vector<Emprunt> Bibliotheque::GetEmpruntList() {
    return _emprunt_list;
}

std::string Bibliotheque::GetNomBibliotheque() {
    return _nom_bibliotheque;
}

std::string Bibliotheque::GetAdress() {
    return _adress;
}

