#include <iostream>
using namespace std;

int monInt = 10; // monInt est un objet de type entier
int* monPointeur; // un pointeur sur un entier

int main(void){
    cout << "monInt: " << monInt << endl; // affiche 10
    monPointeur = &monInt; 
    cout << "monPointeur: " << monPointeur << endl; // affiche l'adresse 0x1058790d0 par exemple
    cout << "*monPointeur: " << *monPointeur << endl; // affiche le contenu pointé: 10 déréférencement
    monPointeur = new int(142); 
    cout << "monPointeur: " << monPointeur << endl; // affiche l'adresse 0x1058790d0 par exemple
    cout << "*monPointeur: " << *monPointeur << endl; // affiche le contenu pointé: 10 déréférencement
}
