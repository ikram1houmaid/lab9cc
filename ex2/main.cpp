
#include <iostream>
using namespace std;

// Classe Technicien
class Technicien {
protected:
    double salaire;

public:
    Technicien(double s) {
        salaire = s;
    }

    void afficherSalaire() {
        cout << "Salaire du technicien : "
             << salaire << " DH" << endl;
    }
};

// Classe Comptable
class Comptable {
protected:
    double salaire;

public:
    Comptable(double s) {
        salaire = s;
    }

    void afficherSalaire() {
        cout << "Salaire du comptable : "
             << salaire << " DH" << endl;
    }
};

// Classe EmployePolyvalent
class EmployePolyvalent : public Technicien, public Comptable {
public:
    EmployePolyvalent(double s1, double s2)
        : Technicien(s1), Comptable(s2) {
    }

    void afficherTousSalaires() {
        Technicien::afficherSalaire();
        Comptable::afficherSalaire();
    }
};

// Fonction principale
int main() {

    EmployePolyvalent e1(5000, 6000);

    cout << "=== Salaires de l'employe polyvalent ==="
         << endl;

    e1.afficherTousSalaires();

    return 0;
}
