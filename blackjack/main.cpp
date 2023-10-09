#include <iostream>
#include <map>
#include <utility> // Inclure pour std::pair
#include <string>

using namespace std;

// Alias pour simplifier le code
using Dictionary = std::map<int , std::pair<int, string>> ;

// Fonction qui retourne un dictionnaire avec des std::pair en valeur
Dictionary creerdico()
{
    Dictionary dico;
    //on crée les cartes de 2 à roi pour les coeurs
    dico[2] = std::make_pair(2, "ascii");
    dico[3] = std::make_pair(3, "ascii");
    dico[4] = std::make_pair(4, "ascii");

    //ici les carreaux

    //ici les pics

    //ici les trèfles

    return dico;
}

int main() {
    Dictionary dico = creerdico();
    // Utilisation du dictionnaire
    for (const auto & pair : dico)
    {
        cout << pair.second.first << endl ;
    }
    return 0;
}