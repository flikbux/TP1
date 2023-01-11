//
// Created by Elie on 18/12/2022.
//

#include "livre.h"
#include "vector"

Livre::Livre(std::string titre, std::string langue, std::string genre, Date date_livre, int ISBN, Auteur auteur, bool is_free) {
    _titre = titre;
    _auteur = auteur;
    _langue = langue;
    _genre = genre;
    _date_livre = date_livre;
    _ISBN = ISBN;
    _is_free = is_free;
}


std::string Livre::GetTitre(){
    return _titre;
}

Auteur Livre::GetAuteur(){
    return _auteur;
}

std::string Livre::GetLangue() {
    return _langue;
}

std::string Livre::GetGenre(){
    return _genre;
}

void Livre::DisplayDate() {
    std::cout << _date_livre.GetJour() << " / " << _date_livre.GetMois() << " / " << _date_livre.GetAnnee() << std::endl;
}

int Livre::GetISBN(){
    return _ISBN;
}

std::vector<std::string> Livre::GetIdList(){
    return _id_list;
}

bool Livre::GetIsFree() {
    return _is_free;
}

void Livre::AddIdToList(std::string identifiant) {
    _id_list.push_back(identifiant);
}

void Livre::SetIsFree(bool is_free) {
    _is_free = is_free;
}

std::ostream& operator<<(std::ostream& os, Livre& livre){
    std::string disponibilite = "N'est pas disponible";
    if (livre.GetIsFree() == 1){
        disponibilite = "Est disponible";
    }

    os << "Titre : " << livre.GetTitre() << std::endl << "Auteur : " << livre.GetAuteur().GetNom() << " " << livre.GetAuteur().GetPrenom() << std::endl << "Genre : " << livre.GetGenre() << std::endl << "Langue : " << livre.GetLangue() << std::endl << "Numero ISNB  : " << livre.GetISBN() << std::endl << "Disponibilite : " << disponibilite << std::endl;
    return os;
}