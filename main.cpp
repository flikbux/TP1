#include "date.h"
#include "livre.h"
#include "lecteur.h"
#include "emprunt.h"
#include "auteur.h"
#include "bibliotheque.h"




int main() {
    std::cout << "Programme en cour d'execution" << std::endl;

    //Creation de la Bibliotheque
    Bibliotheque LeCreusot("Bibliotheque du Creusot", "71200 Le Creusot");

    std::vector<Date> list_date;
    std::cout << "vecteur cree" << std::endl;

    for (int i = 0; i < 4; i++){
        int jour = i + 1;
        int mois = i + 1;
        int annee = 2000 + i + 1;
        list_date.push_back(Date(jour, mois, annee));
        list_date[i].Display();
    }


}