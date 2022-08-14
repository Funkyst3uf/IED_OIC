/* *******************************************************
# Nom ......... : bonjour.c
# Rôle ........ : Affiche un message de bienvenue à l'écran dans plusieurs langues
# Auteur ...... : Jonathan Ntoula
# Version ..... : V0.4 du 13/08/2022
# Licence ..... : GNU GPL
# Compilation . : gcc -Wall bonjour.c -o bonjour
#******************************************************* */

#include <stdio.h>

typedef char * str; // commodité

int main(int argc, char const *argv[])
{	int key = 0;
	
	printf("Sélectionnez votre langue / Select your language :\n");
	printf("1 : Je parle français\n2 : I speak English\n3 : I spreche Deutsch\n4 : Hablo español\n\n");
	printf("Votre choix / Your choice (1, 2, 3 ou/or/oder/o 4) : ");
	scanf("%d", &key);
	
	switch (key)
	{
	case 1 :
		printf("Bonjour et bienvenue dans ce programme inutile\n");
		printf("Ici, nous développerons l'interface utilisateur en version française\n");
		printf("Les autres versions (anglaise, allemande, ...) seront développées dans d'autres branches");
		printf("Nouvelle modification, pour test...")
		break;
	case 2 :
		printf("Hello, welcome to this pointless program\n") ;
		break;
	case 3 :
		printf("Hallo und willkommen in diesem nutzlosen Programm\n");
		break;
	case 4 :
		printf("Hola y bienvenido a este inútil programa\n");
		break;
	default: //alphabet phonétique international
		printf("Bravo India Echo November Victor Echo November Uniform Echo\n");
		break;
	}
	return 0; }
