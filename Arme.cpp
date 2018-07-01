#include "Arme.h"

using namespace std;

Arme::Arme() : m_nom ("Cuillere en bois"), m_degats (15)
{

}

Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{

}

void Arme::changer(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}

void Arme::afficherAll()
{
    cout << "Arme: " << m_nom << " (Dégats: " << m_degats << ")" << endl;
}

void Arme::afficherNom()
{
    cout << m_nom;
}
void Arme::afficherDegats()
{
    cout << m_degats;
}

int Arme::getDegats() const
{
    return m_degats;
}
