#include "liste.hpp"
#include <iostream>

using namespace lc;

Cellule::Cellule(int valeur, Cellule *suivante)
{
    this->valeur = valeur;
    this->suivante = suivante;
}

int Cellule::longueur(Cellule *cellule)
{
    if(cellule == nullptr)
    {
        return 0;
    }

    return 1 + Cellule::longueur(cellule->suivante);
}

Cellule *Cellule::niemeElement(Cellule *cellule, int i)
{
    if(cellule == nullptr)
    {
        throw std::out_of_range ("index out of range");
    }

    if(i == 0)
    {
        return cellule;
    }

    return Cellule::niemeElement(cellule->suivante, i - 1);
}

Liste::Liste()
{
    this->tete = nullptr;
}

bool Liste::estVide()
{
    return this->tete == nullptr;
}

int Liste::longueur()
{
    return Cellule::longueur(this->tete);
}

Cellule *Liste::derniere()
{
    return Cellule::niemeElement(this->tete, this->longueur() - 1);
}

void Liste::ajoute(int x)
{
    Cellule cellule = Cellule(x, nullptr);

    if(this->tete == nullptr)
    {
        std::cout << "tete nul" << std::endl;
        this->tete = &cellule;
        return;
    }

    std::cout << "tete non nul" << ", la taille est de : " << this->longueur() << std::endl;
    this->derniere()->suivante = &cellule;
    return;
}