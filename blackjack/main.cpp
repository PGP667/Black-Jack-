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
    int V ;
    int R ;
    int D ;
    dico={2:2,3:3,4:4,5:5,6:6,7:7,8:8,9:9,10:10,V:10,D:10,R:10}
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
