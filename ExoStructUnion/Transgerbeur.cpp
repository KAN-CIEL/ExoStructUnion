#include <stdio.h>
#include <iostream>

using namespace std;

enum EEtat { vide, palette, rouleau };

union UContenu
{
	Spalette paletteCasier;
	Srouleau rouleauCasier;
};

struct Spalette
{
	int poids;
	char reference[20];
};

struct Srouleau
{
	float longeur;
	int numero;
};

struct Scasier
{
	
};




void main()
{
	typedef int Entier;
	Entier px, py, poids, numero;

	char ref[20];

	float longeur;
	char* ref;


	cout << "Hello world !!";
}