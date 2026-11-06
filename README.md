# TP : Héritage Multiple et Héritage Virtuel en C++

## Présentation du TP

Ce TP contient quatre exercices réalisés en **langage C++**. Il permet de comprendre et de pratiquer les concepts de la programmation orientée objet (POO), notamment l'héritage multiple, la résolution des ambiguïtés et l'héritage virtuel.

Les quatre exercices ont été développés en C++ et sont conçus pour être compilés et exécutés afin de vérifier leur bon fonctionnement.

---

## Exercice 1 : Informations d'un Enseignant Chercheur

### Objectif
Modéliser un enseignant chercheur en utilisant l'héritage multiple à partir de deux classes de base.

### Classes utilisées
- `Personne` : contient le nom, le prénom et une méthode `afficher()`.
- `Chercheur` : contient le domaine de recherche et une méthode `afficher()`.
- `EnseignantChercheur` : hérite de `Personne` et `Chercheur`.

### Fonctionnement
Un constructeur permet d'initialiser les informations de l'enseignant chercheur. La méthode `afficher()` appelle les méthodes des deux classes parentes pour afficher toutes les informations.

### Notions utilisées
- Héritage multiple.
- Constructeurs.
- Réutilisation des méthodes des classes parentes.
- Opérateur de portée `::`.

---

## Exercice 2 : Employé Polyvalent (Ambiguïtés)

### Objectif
Créer un employé qui possède deux rôles : technicien et comptable.

### Classes utilisées
- `Technicien` : contient un attribut `salaire` et une méthode `afficherSalaire()`.
- `Comptable` : contient également un attribut `salaire` et une méthode `afficherSalaire()`.
- `EmployePolyvalent` : hérite des deux classes précédentes.

### Fonctionnement
La classe `EmployePolyvalent` initialise les deux salaires à l'aide de son constructeur. La méthode `afficherTousSalaires()` appelle explicitement les deux méthodes parentes pour afficher le salaire du technicien et celui du comptable.

### Notions utilisées
- Héritage multiple.
- Constructeurs des classes parentes.
- Ambiguïté des méthodes portant le même nom.
- Résolution des ambiguïtés avec `Technicien::` et `Comptable::`.

---

## Exercice 3 : Véhicule Hybride (Héritage Multiple + Virtual)

### Objectif
Modéliser un véhicule hybride qui possède à la fois les caractéristiques d'un véhicule thermique et d'un véhicule électrique.

### Classes utilisées
- `Vehicule` : contient la marque et le modèle.
- `Thermique` : contient la consommation de carburant.
- `Electrique` : contient l'autonomie de la batterie.
- `Hybride` : hérite de `Thermique` et `Electrique`.

### Fonctionnement
Les classes `Thermique` et `Electrique` héritent virtuellement de `Vehicule`. Cela permet à la classe `Hybride` de partager une seule copie de la classe de base.

La méthode `afficherCaracteristiques()` affiche toutes les informations du véhicule hybride.

### Notions utilisées
- Héritage multiple.
- Héritage virtuel avec `virtual public`.
- Problème du diamant (Diamond Problem).
- Constructeurs et initialisation de la classe de base virtuelle.

---

## Exercice 4 : Système d'Utilisateurs Avancé

### Objectif
Développer un système de gestion des utilisateurs avec plusieurs rôles et un menu interactif.

### Classes utilisées
- `Utilisateur` : contient un identifiant et un login.
- `Administrateur` : contient les droits d'accès et la méthode `gererSysteme()`.
- `Moderateur` : contient le niveau de modération et la méthode `modererContenu()`.
- `SuperUtilisateur` : hérite de `Administrateur` et `Moderateur`.

### Fonctionnement
La classe `SuperUtilisateur` possède les fonctionnalités d'un administrateur et d'un modérateur.

L'héritage virtuel est utilisé pour éviter la duplication de la classe `Utilisateur`.

Un menu interactif en ligne de commande permet de :
1. Créer un SuperUtilisateur.
2. Afficher ses informations.
3. Gérer le système.
4. Modérer le contenu.
5. Quitter le programme.

### Notions utilisées
- Héritage multiple.
- Héritage virtuel.
- Résolution des ambiguïtés.
- Constructeurs des classes parentes.
- Allocation et libération dynamique de mémoire (`new` et `delete`).
- Menu interactif avec `do while` et `switch case`.

---

## Technologies utilisées

- **Langage :** C++
- **Paradigme :** Programmation Orientée Objet (POO)
- **Environnement de développement :** Eclipse IDE
- **Bibliothèques :** `iostream` et `string`

## Compilation et exécution

Chaque exercice possède son propre programme principal (`main()`).

Pour compiler un exercice avec un compilateur g++ :

```bash
g++ main.cpp -o programme
```

Pour exécuter le programme :

```bash
./programme
```

Sous Windows :

```bash
programme.exe
```

## Conclusion

Ce TP a permis de mettre en pratique les principaux concepts de l'héritage multiple en C++. Les quatre exercices ont été réalisés en utilisant les classes, les constructeurs, les méthodes et les mécanismes de résolution des ambiguïtés.

Les programmes sont conçus pour être compilés et exécutés séparément. Ils permettent de vérifier le fonctionnement de chaque notion étudiée et de mieux comprendre l'utilisation de l'héritage multiple et virtuel dans des situations concrètes.

**TP réalisé en langage C++ dans le cadre de l'apprentissage de la Programmation Orientée Objet.**
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/be06fdff-f082-47d1-bf7e-129da57720e0" />
