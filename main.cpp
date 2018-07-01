#include <iostream>
#include <string>
#include "Perso.h"

using namespace std;

int main()
{
    string pseudo;
    int choixAction;
    string rejouer;

  do {

    cout << "Entrez le nom du joueur 1 :" << endl;
    getline(cin, pseudo);
    Perso joueur1(pseudo);
    joueur1.afficherStats();

    cout << endl;
    cout << "Entrez le nom du joueur 2 :" << endl;
    getline(cin, pseudo);
    Perso joueur2(pseudo);
    joueur2.afficherStats();


do
{
    // Action du premier joueur
    cout << endl;
    joueur1.afficherPseudo();
    cout << " que souhaitez-vous faire ?" << endl << endl;
    cout << "1 - Attaquer" << endl;
    cout << "2 - Lancer un sort" << endl;
    cout << "3 - Boire une potion de vie" << endl;
    cout << "4 - Boire une potion de mana" << endl;
    cout << "5 - Changer d'arme" << endl;
    cout << "6 - Changer d'armure" << endl;
    cout << "Quel est le numéro de votre choix?" << endl;
{
    cout << endl;
    cout << "J'opte pour le choix numéro: ";
    cin >> choixAction;

    switch (choixAction)
    {
        case 1:
            joueur1.attaquer(joueur2);
            break;
        case 2:
            joueur1.attaqueMagique(joueur2);
            break;
        case 3:
            joueur1.boirePotionVie(1);
            break;
        case 4:
            joueur1.boirePotionMana(1);
            break;
        case 5:
            joueur1.changerArme("Crayon a papier hyper pointu", 25);
            break;
        case 6:
            joueur1.changerArmure("Parapluie telescopique", 20);
            break;
        default:
            cout << "Choix non valable." << endl;
            break;
    }
} while (choixAction > 6 || choixAction < 1); // Fin boucle d'erreur

// Action du second joueur
if (joueur2.estVivant())
{
    cout << endl;
    joueur2.afficherPseudo();
    cout << " que souhaitez-vous faire ?" << endl << endl;
    cout << "1 - Attaquer" << endl;
    cout << "2 - Lancer un sort" << endl;
    cout << "3 - Boire une potion de vie" << endl;
    cout << "4 - Boire une potion de mana" << endl;
    cout << "5 - Changer d'arme" << endl;
    cout << "6 - Changer d'armure" << endl;
    cout << "Quel est le numéro de votre choix?" << endl;
{
    cout << endl;
    cout << "J'opte pour le choix numéro: ";
    cin >> choixAction;

    switch (choixAction)
    {
        case 1:
            joueur2.attaquer(joueur1);
            break;
        case 2:
            joueur2.attaqueMagique(joueur1);
            break;
        case 3:
            joueur2.boirePotionVie(1);
            break;
        case 4:
            joueur2.boirePotionMana(1);
            break;
        case 5:
            joueur2.changerArme("Arrosoir synthetique cancerigene", 25);
            break;
        case 6:
            joueur2.changerArmure("Cire jaune poussin", 20);
            break;
        default:
            cout << "Choix non valable." << endl;
            break;
    }

} while (choixAction > 6 || choixAction < 1);
}
} while (joueur1.estVivant() && joueur2.estVivant()); // Fin boucle global

} while (rejouer == "OUI");
    cout << endl << "Voulez-vous faire une autre partie ? OUI/NON" << endl;
    cin >> rejouer;

   return 0;
}
