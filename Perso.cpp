#include "Perso.h"

using namespace std;

Perso::Perso(string pseudo): m_pseudo(pseudo), m_vie(100), m_mana(100), m_quantitePotionVie(6), m_quantitePotionMana (6)
{

}

Perso::Perso(string pseudo, string nomArme, int degatsArme, string nomArmure, int defenseArmure, string spell, int degatsMagique, int manaCost) : m_vie (100), m_mana (100), m_quantitePotionVie (6*20), m_quantitePotionMana (6*20), m_arme (nomArme, degatsArme), m_armure (nomArmure, defenseArmure), m_magie (spell, degatsMagique, manaCost)
{

}

Perso::~Perso()
{

}

void Perso::attaquer (Perso &cible)
{
    cout << endl << m_pseudo << " attaque " << cible.m_pseudo << " avec ";
    m_arme.afficherNom();
    cout << " qui inflige ";
    m_arme.afficherDegats();
    cout << " points de dégats." << endl;

    cible.recevoirDegats(m_arme.getDegats());
    afficherPseudo();
    afficherEtat();
}

void Perso::attaqueMagique (Perso &cible)
{
    m_mana -= m_magie.getManaCost();

    cout <<endl << m_pseudo << " lance une attaque magique avec le sort ";
    m_magie.afficherSpell();
    cout << " qui inflige ";
    m_magie.afficherDegatsMagique();
    cout << " points de dégats. Ce sort lui coute ";
    m_magie.afficherManaCost();
    cout << " points de Mana." << endl;

    cible.recevoirDegatsMagique(m_magie.getDegatsMagique());
    afficherPseudo();
    afficherEtat();
}
void Perso::recevoirDegats(int nbDegats)
{
    cout << endl << m_pseudo << " se défend avec ";
    m_vie -= nbDegats -= m_armure.getDefense();
    m_armure.afficherNom();
    cout << "qui lui fait évité ";
    m_armure.afficherDef();
    cout << " points de dégats." << endl;

    if (m_vie <= 0){gameOver();}
    else    {
            cout << "Resultat des courses: \t";
            afficherPseudo();
            afficherEtat();}
}

void Perso::gameOver()
{
    m_vie = 0; estVivant();
    afficherPseudo();
    cout << " est mort!" << endl;
    cout << "GAME OVER" << endl;
}

void Perso::recevoirDegatsMagique(int nbDegatsMagique)
{
    cout << endl << m_pseudo << " se défend avec ";
    m_vie -= nbDegatsMagique -= m_armure.getDefense();
    m_armure.afficherNom();
    cout << "qui lui fait évité ";
    m_armure.afficherDef();
    cout << " points de dégats." << endl;

    if (m_vie <= 0){gameOver();}
    else    {
            cout << "Resultat des courses: \t";
            afficherPseudo();
            afficherEtat();}
}

void Perso::boirePotionVie(int quantitePotionVie)
{
    if (m_quantitePotionVie <= 0){cout << endl << "Vous n'avez plus de potions de vies!" << endl;}

    else{
    m_quantitePotionVie--;
    m_vie += 20;
        if (m_vie > 100){m_vie = 100;}
        cout << "Il vous reste " << m_quantitePotionVie << " potions de vie." << endl;
    }

    afficherPseudo();
    afficherEtat();

    cout << endl;
}
void Perso::boirePotionMana(int quantitePotionMana)
{
    if (m_quantitePotionMana <= 0){cout << endl << "Vous n'avez plus de potions de Mana!" << endl;}

    else {
    m_quantitePotionMana--;
    m_mana += 20;
        if (m_mana > 100){m_mana = 100;}
        cout << "Il vous reste " << m_quantitePotionMana << " potions de mana." << endl;
    }

    afficherPseudo();
    afficherEtat();

    cout << endl;
}
void Perso::changerArme(string nomNewArme, int degatsNewArme)
{
    m_arme.changer (nomNewArme, degatsNewArme);
    cout << endl << "Vous avez changé pour: ";
    m_arme.afficherAll();
    cout << endl;
}

void Perso::changerArmure(string nomNewArmure, int defenseNewArmure)
{
    m_armure.changer (nomNewArmure, defenseNewArmure);
    cout << endl << "Vous avez changé pour: ";
    m_armure.afficherAll();
}

bool Perso::estVivant()
{
   if (m_vie > 0) {return true;}
}

void Perso::afficherStats()
{
    cout << endl << "Vie: " << m_vie <<  " \t Mana: " << m_mana << endl;
    m_arme.afficherAll();
    m_armure.afficherAll();
    cout << endl;
}

void Perso::afficherEtat()
{
    cout << endl << "Vie: " << m_vie <<  " \t Mana: " << m_mana << endl;
}

void Perso::afficherPseudo()
{
    cout << m_pseudo;
}

