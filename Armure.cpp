#include "Armure.h"

using namespace std;

Armure::Armure() : m_nom ("Gilet en laine d'Alpaga"), m_defense (10)
{

}

Armure::Armure(string nom, int defense) : m_nom(nom), m_defense(defense)
{

}

void Armure::changer(string nom, int defense)
{
    m_nom = nom;
    m_defense = defense;
}

void Armure::afficherAll()
{
    cout << "Armure: " << m_nom << " (défense: " << m_defense << ")" << endl << endl;
}

void Armure::afficherNom()
{
    cout << m_nom;
}

void Armure::afficherDef()
{
    cout << m_defense/2;
}

int Armure::getDefense() const
{
    return m_defense/2;
}
