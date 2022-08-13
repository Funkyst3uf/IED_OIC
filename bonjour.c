/* *******************************************************
# Nom ......... : bonjour.c
# Rôle ........ : Affiche un message de bienvenue à l'écran dans plusieurs langues
# Auteur ...... : Jonathan Ntoula
# Version ..... : V0.1 du 13/08/2022
# Licence ..... : GNU GPL
# Compilation . : gcc -Wall bonjour.c -o bonjour
#******************************************************* */

#include <stdio.h>
#include <stdlib.h>

typedef char * str; // commodité

int main(int argc, char const *argv[])
{
	printf("Bonjour et bienvenue dans ce programme inutile") ;
	return 0;
}
