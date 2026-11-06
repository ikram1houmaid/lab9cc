
#include <iostream>
#include <string>
using namespace std;

// Classe de base Vehicule
class Vehicule {
protected:
    string marque;
    string modele;

public:
    Vehicule(string ma, string mo) {
        marque = ma;
        modele = mo;
    }
};

// Classe Thermique
class Thermique : virtual public Vehicule {
protected:
    double consommationCarburant;

public:
    Thermique(string ma, string mo, double c)
        : Vehicule(ma, mo) {
        consommationCarburant = c;
    }
};

// Classe Electrique
class Electrique : virtual public Vehicule {
protected:
    double autonomieBatterie;

public:
    Electrique(string ma, string mo, double a)
        : Vehicule(ma, mo) {
        autonomieBatterie = a;
    }
};

// Classe Hybride
class Hybride : public Thermique, public Electrique {
public:
    Hybride(string ma, string mo, double c, double a)
        : Vehicule(ma, mo),
          Thermique(ma, mo, c),
          Electrique(ma, mo, a) {
    }

    void afficherCaracteristiques() {
        cout << "=== Caracteristiques du vehicule hybride ==="
             << endl;

        cout << "Marque : " << marque << endl;
        cout << "Modele : " << modele << endl;
        cout << "Consommation carburant : "
             << consommationCarburant << " L/100km" << endl;
        cout << "Autonomie batterie : "
             << autonomieBatterie << " km" << endl;
    }
};

// Fonction principale
int main() {

    Hybride v1("Toyota", "Prius", 4.5, 60);

    v1.afficherCaracteristiques();

    return 0;
}
