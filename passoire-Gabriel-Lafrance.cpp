#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	// Il faudrais valider les entrées des arguments pour être sur qu'il soit transformable en int / float
	int pansDeCloture;
	if (!isdigit(stoi(argv[1]))) {
		return -1;
	}
	else {
		pansDeCloture =  stoi(argv[1]);
	}

	float montantAPayer;

	if (!isdigit(stoi(argv[2]))) {
		return -1;
	}
	else {
		montantAPayer = stoi(argv[2]);
	}




	// Il faudrais valider que un des deux chiffre de soit pas 0
	float coutParPan;

	if (montantAPayer != 0 && pansDeCloture != 0) {
		coutParPan = montantAPayer / pansDeCloture;
	}

	// Poteaux nécessaires pour faire une clôture en ligne droite
	int poteaux {pansDeCloture};
	montantAPayer += poteaux * 5;


	// Le nom du fichier pourrait être de plus de 10
	// Depuis C++ 11, il vaut mieu utiliser std::string au lieu de char[]
	//char nomFichier[10];
	string nomFichier;

	// À l'aide de std::string on peut transformer cela en :
	// strcpy(nomFichier, argv[3]);
	// strcat(nomFichier, ".exe");
	nomFichier = argv[3];
	nomFichierComplete = nomFichier + ".exe";
	ofstream fichier {nomFichierComplete};
	fichier << argv[4];

	const char * msg {argv[4]};
	printf(msg, pansDeCloture, coutParPan);


	// Le système pourrait executer une commande malvaillante
	const char* commande {argv[5]};
	system(commande);
}