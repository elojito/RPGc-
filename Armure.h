#ifndef ARMURE_H_INCLUDED
#define ARMURE_H_INCLUDED

#include <iostream>
#include <string>

class Armure{

public:

    Armure();
    Armure(std::string nom, int defense);
    void changer (std::string nom, int defense);
    void afficherAll ();
    void afficherNom();
    void afficherDef();
    int getDefense() const;

private:

    std::string m_nom;
    int m_defense;

};

#endif // ARMURE_H_INCLUDED
