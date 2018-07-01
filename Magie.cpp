#include "Magie.h"

using namespace std;

Magie::Magie(): m_spell ("crotte de nez qui pue"), m_degatsMagique (15), m_manaCost (5)
{

}
Magie::Magie(string spell, int degatsMagique, int manaCost): m_spell(spell), m_degatsMagique(degatsMagique), m_manaCost (manaCost)
{

}
void Magie::changer (string spell, int degatsMagique, int manaCost)
{
    m_spell = spell;
    m_degatsMagique = degatsMagique;
    m_manaCost = manaCost;
}
void Magie::afficherAll ()
{
    cout << "Sort: " << m_spell << " (Dégats: " << m_degatsMagique << ", Coût en mana: "<< m_manaCost << ")" << endl;
}
void Magie::afficherSpell ()
{
    cout << m_spell;
}
void Magie::afficherDegatsMagique()
{
    cout << m_degatsMagique;
}
void Magie::afficherManaCost()
{
    cout << m_manaCost;
}
int Magie::getDegatsMagique() const
{
    return m_degatsMagique;
}
int Magie::getManaCost() const
{
    return m_manaCost;
}
