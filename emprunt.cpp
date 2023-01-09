//
// Created by Elie on 05/01/2023.
//

#include "emprunt.h"
#include "lecteur.h"

Emprunt::Emprunt(Date& date, Lecteur& lecteur, Livre& livre) {
    std::cout << std::to_string(livre.GetIsFree()) << std::endl;
    if (livre.GetIsFree() == 1){
        _date = date;
        _ISBN = livre.GetISBN();
        _identifiant = lecteur.GetIdentifiant();

        livre.SetIsFree(0);
        livre.AddIdToList(_identifiant);

        lecteur.AddISBNToList(_ISBN);

        std::cout << "Le livre " << livre.GetTitre() << " a ete emprunter par [M / Mme] " << lecteur.GetNom() << std::endl;
    }
    else{
        std::cout << "Ce livre n'est pas disponible pour le moment" << std::endl;
    }
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

void Restitution(Date& date, Lecteur& lecteur, Livre& livre) {
    std::vector<int>::iterator check;
    check = std::find(lecteur.GetISBNList().begin(), lecteur.GetISBNList().end(), livre.GetISBN());

    //on ajoute un teste unitaire car si selement 1 element dans la list et que c'est celui que l'on cherche find renvera le dernier index qui est egalement le premier
    if (check != lecteur.GetISBNList().end() || lecteur.GetISBNList()[0] == livre.GetISBN()){
        livre.SetIsFree(1);
        lecteur.RmISBNFromList(livre.GetISBN());
        std::cout << "[M / Mme] " << lecteur.GetNom() << " " << lecteur.GetPrenom() << " a rendu le livre : " << livre.GetTitre() << " avec succes." << std::endl;

    }
    else{
        std::cout << "[M / Mme] " << lecteur.GetNom() << " " << lecteur.GetPrenom() << " n'as pas emprunte ce livre" << std::endl;
    }
}

