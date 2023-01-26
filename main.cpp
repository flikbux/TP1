//
// Created by Elie on 26/01/2023.
//
#include "date.h"
#include "livre.h"
#include "lecteur.h"
#include "auteur.h"
#include "bibliotheque.h"

//g++ a compiler : g++ .\main.cpp .\auteur.cpp .\auteur.h .\date.cpp .\date.h .\emprunt.cpp .\emprunt.h .\lecteur.cpp .\lecteur.h .\livre.cpp .\livre.h .\bibliotheque.cpp .\bibliotheque.h



int main() {
    std::cout << "Programme en cour d'execution" << std::endl;

    //Creation de la Bibliotheque
    Bibliotheque LeCreusot("Bibliotheque du Creusot", "71200 Le Creusot");

    //creation de vecteur comportant comportant les objets que l'on souhaite cree
    std::vector<Date> list_date;
    std::vector<Auteur> list_auteur;
    std::vector<Lecteur> list_lecteur;
    std::vector<Livre> list_livre;

    //l'element le plus cree est le livre, on passeras donc 10 fois dans la boucle
    for (int i = 0; i < 10; i++) {
        //on cree un variable string en fonction de i
        std::string i_string = std::to_string(i);

        //on cree un date a chaque iteration
        list_date.emplace_back(i + 1, i + 1, 2000 + i + 1);

        //Creation de 10 livre
        //Dans la premiere boucle nous crerons egalement 4 lecteur et 4 auteur
        if (i < 4){
            //Creation d'un auteur dans le tableau des auteurs
            list_auteur.emplace_back(list_date[i], "00" + i_string, "nom_auteur_" + i_string, "prenom_auteur_" + i_string);

            //Creation des lecteur dans le tableau des lecteurs
            list_lecteur.emplace_back("01" + i_string, "nom_lecteur_" + i_string, "prenom_lecteur_" + i_string);

            list_livre.emplace_back("titre_" + i_string, "langue_" + i_string, "genre_" + i_string, list_date[i], i, list_auteur[0]);
        }
        else if (i < 7){
            list_livre.emplace_back("titre_" + i_string, "langue_" + i_string, "genre_" + i_string, list_date[i], i, list_auteur[1]);
        }
        else{
            list_livre.emplace_back("titre_" + i_string, "langue_" + i_string, "genre_" + i_string, list_date[i], i, list_auteur[2]);
        }
    }


    //On fait un emprunt
    list_lecteur[1].Emprunter(list_date[1], list_livre[5]);

    //On essaie d'emprunter le meme livre avec un autre lecteur
    list_lecteur[2].Emprunter(list_date[2], list_livre[5]);

    //On essaie de rendre le livre avec le mauvais lecteur
    list_lecteur[2].Restitutuer(list_livre[5]);

    //On restitue le livre avec le bon lecteur
    list_lecteur[1].Restitutuer(list_livre[5]);

    //On emprunte le livre qui est desormais disponible avec un autre lecteur
    list_lecteur[2].Emprunter(list_date[3], list_livre[5]);


}