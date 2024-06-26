# RIP - Un Fichier C++ pour Endommager les Ordinateurs Windows

**Avertissement :** Ce projet est destiné à des fins éducatives uniquement. L'utilisation de ce code peut entraîner une perte de données, des conséquences légales et des dommages significatifs à votre ordinateur. Ne l'utilisez jamais sur des systèmes réels. Utilisez vos compétences en programmation de manière éthique et responsable.

## Description

Le projet **RIP** est un fichier C++ conçu pour démontrer les dangers des programmes malveillants. Lorsqu'il est exécuté, ce programme tentera de supprimer le répertoire système critique `System32` de Windows, ce qui rendra le système inopérant.

## Fonctionnalités

- Suppression du répertoire `System32` de Windows.
- Modification des paramètres de démarrage de Windows pour rendre le système inutilisable.
- Arrêt forcé et immédiat de l'ordinateur.

## Utilisation

### Prérequis

- Un ordinateur sous Windows (fortement déconseillé d'exécuter ce programme sur un système réel).
- Un compilateur C++ (comme MinGW ou Visual Studio).

### Compilation

Pour compiler ce programme, utilisez un compilateur C++ compatible :

```sh
g++ -o RIP RIP.cpp
