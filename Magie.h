#ifndef MAGIE_H_INCLUDED
#define MAGIE_H_INCLUDED

#include <iostream>
#include <string>

class Magie {

public:

    Magie();
    Magie(std::string spell, int degatsMagique, int manaCost);
    void changer (std::string spell, int degatsMagique, int manaCost);
    void afficherAll ();
    void afficherSpell ();
    void afficherDegatsMagique ();
    void afficherManaCost();
    int getDegatsMagique() const;
    int getManaCost() const;


private:

    std::string m_spell;
    int m_degatsMagique;
    int m_manaCost;
};
#endif // MAGIE_H_INCLUDED
