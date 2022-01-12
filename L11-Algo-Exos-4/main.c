#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercice 1
  /*  int population, ville=0;
    do{
        printf("Inscrire le nombre d'habitant ou -1 pour terminer \n");
        scanf("%d",&population);
        if (population>=10000){ //lorsque le nombre d'habitant atteint les 10 000, le village est considéré comme une ville.
            ville=ville+1;
        }
    }while (population!=-1);
    printf("Le nombre de ville visitee est de: %d \n",ville);


    //Exercice 2
    int age, poids=0, prix_total, prix_poids;
    printf("Entrez votre age \n");
    scanf("%d",&age);

    if (age<10){
        prix_total=5;
    }else if (age=60){ //gratuit pour les personnes ayant l'age de l aubergiste.
        prix_total=0;
    }else{
        printf("Entrez le poids de vos valises \n");
        scanf("%d",&poids);
        if (poids>=20){ //les valises sont gratuites en dessous de 20 ecus.
            prix_poids=10;
            prix_total=prix_poids+30;
        }
    }
    printf("Le prix total est de %d \n",prix_total);


    //Exercice 3
    int personne, capacite=0;

    while (capacite>-1) {
        printf("Saisir le nombre de personne entrant ou sortant de la Start to Play \n");
        scanf("%d",&personne);
        capacite=capacite+personne;
        if (capacite>250){ //on verifie le nombre de personne déjà présente dans la salle
            printf("Impossible, nombre maximum atteint \n");
            capacite=capacite-personne;//les personnes qui voulait rentrer ne peuvent pas donc elles ressortent.
        }else{
            printf("capacite dans la salle actuellement: %d \n",capacite);
        }
    }

    //Exercice 4-1 Non reussi

    //Exercice 4-2
    int i, i_1=10,nombre=0;

    while (i_1>0){
        for (i=0;i<i_1;i++){
            printf("%d",nombre);
        }
        nombre=nombre+1;
        i_1=i_1-1;
        printf("\n");
    }

    //Exercice 5 Non reussi

    //Exercice 6
    int malade=1, population, jour=1;

    printf("Saisir la population totale de la ville \n");
    scanf("%d",&population);
    while (population>malade) {
        malade=malade+(malade*2); /chaque contaminé contaminent 2 personnes en plus chacun.
        jour=jour+1;
    }
    printf("Le nombre de jour ou la population entiere sera contamine: %d \n",jour);
*/

    //Exercice 7 Resultat faux
    int max_pierre,pierre_utile=0,hauteur=1,i=0;

    printf("Entrez le nombre de pierre maximum pour composer la pyramide \n");
    scanf("%d",&max_pierre);
    while (pierre_utile<max_pierre){
            pierre_utile=pierre_utile + i^2;//je n'arrive pas à regler ce problème de calcul.
            hauteur=hauteur+1;
            i=i+1;
    }
    printf("La hauteur est de %d, le nombre de pierre necessaire est de %d \n",hauteur,pierre_utile);


    return 0;
}
