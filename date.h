//
// Created by Elie on 12/12/2022.
//

#ifndef TP1_DATE_H
#define TP1_DATE_H


class date {
private:
    int _jour;
    int _mois;
    int _annee;

public:
    date(int jour = 0, int mois = 0, int annee = 0);

    int GetJour();
    int GetMois();
    int GetAnnee();

};


#endif //TP1_DATE_H
