#ifndef PERSO_H_INCLUDED
#define PERSO_H_INCLUDED

#include <iostream>
#include <string>
#include "Arme.h"
#include "Armure.h"
#include "Magie.h"

class Perso {

public:

    Perso(std::string pseudo);

    Perso(std::string pseudo, std::string nomArme, int degatsArme, std::string nomArmure, int defenseArmure, std::string spell, int degatsMaqique, int manaCost);
    ~Perso();
    void recevoirDegats (int nbDegats);
    void recevoirDegatsMagique (int nbDegatsMagique);
    void attaquer (Perso &cible);
    void attaqueMagique (Perso &cible);
    void boirePotionVie (int quantitePotionVie);
    void boirePotionMana (int quantitePotionMana);
    void changerArme (std::string nomNewArme, int degatsNewArme);
    void changerArmure (std::string nomNewArmure, int defenseNewArmure);
    bool estVivant ();
    void afficherStats();
    void afficherEtat();
    void afficherPseudo();
    void gameOver();

private:

    std::string m_pseudo;
    int m_vie;
    int m_mana;
    int m_manaCost;
    int m_quantitePotionVie;
    int m_quantitePotionMana;
    Arme m_arme;
    Armure m_armure;
    Magie m_magie;

};


#endif // PERSO_H_INCLUDED
