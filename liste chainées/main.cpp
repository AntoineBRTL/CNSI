#include "liste.hpp"
#include <iostream>

int main()
{

    /*lc::Cellule celule1 = lc::Cellule(12, nullptr);
    lc::Cellule celule2 = lc::Cellule(24, nullptr);
    lc::Cellule celule3 = lc::Cellule(28, nullptr);
    celule1.suivante = &celule2;
    celule1.suivante->suivante = &celule3;

    std::cout << lc::Cellule::longueur(&celule1) << std::endl;
    std::cout << lc::Cellule::niemeElement(&celule1, 2)->valeur << std::endl;*/

    lc::Liste lst = lc::Liste();

    lst.ajoute(12);
    lst.ajoute(23);
    lst.ajoute(34);
    lst.ajoute(54);
    lst.ajoute(64);
    lst.ajoute(37);
    lst.ajoute(39);
    //lst.ajoute(15);

    std::cout << lst.longueur() << std::endl;
}