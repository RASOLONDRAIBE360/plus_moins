#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choix(int x);//Erreur: j'ai oublié de mettre le nom de la fonction devant la fonction qui va l'appeler 
                // et j'ai aussi oublié de déclarer le type de variable dans le paramètre de la fonction choix()

void plus_moin(int x, int nbre){
    int compteur=0;
	int nombre_essaie;
	srand(time(NULL));
        int valeur_a_trouver = rand()%101;//Pour choisir un nombre aleatoirement 
        
        do{
                if(x == valeur_a_trouver){
                        printf("Bingo\n");
                            break;
                                }

                else if(x>valeur_a_trouver){
                        printf("moins\n");
                        }

                else {
                        printf("plus\n");
                     }
                     //Amélioration du code en mettant directement les instructions printf, scanf, compteur++ après
                    //les conditions else if et else pour ne pas rendre le code trop long 
                        printf("Veuillez reessayer!\n");
                        printf("Reinserer a nouveau\n");
                        printf("=> ");
                        scanf("%d", &x);
                        compteur++;
                            }
        while(compteur<nbre);
}   

int choix(int x){
    int nombre_essaie;//Erreur : variable non déclarer
    int compteur=0;
    do{
    
    switch (x){//Erreur : J'ai oublié de mettre le switch avant les instructions case
	   case 1:
		    return nombre_essaie = -1;//Je ne savais pas que -1 faisait référence à un boucle infini du fait qu'il est impossible 
		                    //pour un boucle d'atteindre le nombre -1 donc il va se répéter jusqu'à un nombre illimité
	   case 2: 
		    return nombre_essaie = 25;
		
	   case 3: 
		    return nombre_essaie = 10;
            
	   default:
		    printf("Votre choix ne figure pas parmit les modes de difficultes definie\n");
		    break;
		    
    }
        compteur++;//Mise à jour du compteur(le compteur s'incrémente à chaque fois que l'utilisateur fait le mauvais
                    // choix et la condition default est respecté 
        if(compteur<3){
            printf("Veuillez refaire votre choix! : ");
            printf("=> ");
            scanf("%d", &x);
            printf("\n");
        }//Condition de sorte à donner 2 tentatives à l'utilisateur de faire le bon choix 
    }
    while(compteur<3);
    printf("Vous avez epuise les 02 de tentative qui ete a votre disposition!!!\n ");
}
int main(){      
    int choix_joueur;
	int mode;
	printf("Choisir le mode de difficulte par les nombres 1, 2 ou 3:\n\n");
	printf("\t1.Facile  2.Moyen  3.Difficile\n");
	printf("=> ");
	scanf("%d", &mode); //Erreur : J'avais oublié de changer le %s qui fait référence à string par %d ce qui 
	                    //a entraîné une erreur dans mon code 
	int nbre = choix(mode);//La variable nbre stocke le nombre_essaie selon le mode de difficulté que nous avons 
	                        //choisi 
	    
    printf("Trouver un nombre se trouvant entre l'intervalle de [0 - 100]\n");
    printf("Essayer de deviner le nombre exacte: \n");
    printf("=> ");
    scanf("%d", &choix_joueur);
    plus_moin(choix_joueur, nbre);//Le nombre_essaie qui a été stocké dans la variable nbre va maintenant être utilisé
                                //par la fonction plus_moin pour se référer au  nombre d'essaye que l'utilisateur a 
                                //selon le choix de difficulté qu'il avait fait précédemment
    printf("FIN DU PROGRAMME");
    return 0; 
}

