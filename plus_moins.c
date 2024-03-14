#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moin(int x){
        int compteur=0;
	srand(time(NULL));
        int valeur_a_trouver = rand()%101;//Pour choisir un nombre aleatoirement 
        do{
                if(x == valeur_a_trouver){
                        printf("Bingo\n");
                            break;
                                }

                else if(x>valeur_a_trouver){
                        printf("moins\n");
                        printf("Veuillez reessayer!\n");
                        printf("Reinserer a nouveau\n");
                        printf("=> ");
                        scanf("%d", &x);
                        compteur++;
                        }

                else {
                        printf("plus\n");
                        printf("Veuillez reessayer!\n");
                        printf("Reinserer a nouveau\n");
                        printf("=> ");
                        scanf("%d", &x);
                        compteur++;
                     }

                            }
        while(compteur<5);
}   

int main(){       
        int choix_joueur;
        printf("Trouver un nombre se trouvant entre l'intervalle de [0 - 100]\n");
        printf("Essayer de deviner le nombre exacte: \n");
        printf("=> ");
        scanf("%d", &choix_joueur);
        plus_moin(choix_joueur);
        printf("FIN DU PROGRAMME");
        return 0; 
}

