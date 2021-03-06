#include <stddef.h>

// Fonction nonAutoriser
// Les paramètres : message utilisateur, tableau des minuscules, tableau des majuscules et le tableau des accents
// Retourne 2 si le caractère n'est pas une minuscule,  une majuscule,  un accent ou un espace
// Sinon retourne 1
int nonAutoriser(wchar_t *message,wchar_t *min,wchar_t *maj,wchar_t *accent);

// Fonction verifExistaccent
// Les paramètres : message utilisateur et le tableau des accents 
// Retourne 1 si il y a un accent
// Sinon retourne 0
int verifExistaccent(wchar_t *message,wchar_t *accent);

// Procedure convertionMessage
// Les paramètres: message utilisateur, message sans accent de l'utilisateur(sortie), tableau des minuscules et tableau des majuscules 
// Stock dans le tableau messageSansAccent le message de l'utilisateur sans accent
void convertionMessage(wchar_t *message,wchar_t *messageSansAccent,wchar_t *maj,wchar_t *min);


// Fonction verifExistaccent
// les paramètres : tableau des majuscules et la lettre à l'indice i du message
// Retourne 0 si la lettre est une majuscule
// Sinon retourne 1
int estMaj(wchar_t *maj,wchar_t lettre);

// Fonction indice
// les paramètres : tableau des minuscules, tableau des majuscules et la lettre à l'indice i du message
// Retourne indice en fonction du tableau minucules et majuscules
int indice(wchar_t *min,wchar_t *maj,wchar_t lettre);


// Procedure cesar
// Les paramètres:  message sans accent de l'utilisateur, message convertie(sortie), tableau des minuscules et tableau des majuscules et la clef saisie par l'utiisateur dans le main
// Stock dans le resultat dans message convertie 
void cesar(wchar_t *messageSansAccent,wchar_t *messageConvertie, wchar_t *min,wchar_t *maj,int clefC);

// Procedure cesarDechiffrement
// Les paramètres:  message sans accent de l'utilisateur, message convertie(sortie), tableau des minuscules et tableau des majuscules et la clef saisie par l'utiisateur dans le main
// Stock dans le resultat dans message convertie 
void cesarDechiffrement(wchar_t *messageSansAccent,wchar_t *messageConvertie, wchar_t *min,wchar_t *maj,int clefC);
// Procedure vigenere
// Les paramètres:  message sans accent de l'utilisateur,  tableau des minuscules et tableau des majuscules, message convertie(sortie) et la clef saisie par l'utiisateur dans le main
// Stock dans le resultat dans message convertie 
void vigenere(wchar_t *messageSansAccent,wchar_t *min,wchar_t *maj,wchar_t *messageConvertie, wchar_t *clefV);

// Procedure copieClef
// Les paramètres:  message sans accent de l'utilisateur, La clef saisie par l'utilisateur dans le main, tableau de la clef en fonction du nombre d'élement du message de l'utilisateur
// Stock dans le resultat dans copie clef
void copieClef(wchar_t *messageSansAccent,wchar_t *clefV,wchar_t *copieClef);

// Procedure vigenereDechiffrement
// Les paramètres:  message sans accent de l'utilisateur,  tableau des minuscules et tableau des majuscules, message convertie(sortie) et la clef saisie par l'utiisateur dans le main
// Stock dans le resultat dans message convertie 
void vigenereDechiffrement(wchar_t *messageSansAccent,wchar_t *min,wchar_t *maj,wchar_t *messageConvertie, wchar_t *clefV);

// Procedure cartourche
// Affiche la cartouche
void cartourche();
