#include<stdio.h>
#include<string.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>


int plus_moins(int cj, int vat)
{
    printf("\n");
    int point;
    point=0;
    char pt[4];
    
    if(point <= 1)
    {
        strcpy(pt, "pt");

    }
    else
    {
        strcpy(pt, "pts");
    }
    //-------------------------------
    if(cj == vat)
    {
        system("clear");
        system("cat bingo.txt");
    }
    if(cj > vat)

    {
        
        point++;
        printf("You have %d %s", point, pt);
    }
    if(cj < vat)
    {
        point=1-point;
        printf("You have %d %s", point, pt);
    }
    
   
};


int main ()

{
    int choix_joueur;
    int valeur_a_trouver;
    int var;
    system("clear");
    system("cat welcome.txt");
    printf(
                        " ----> "
            );
    scanf("%d", &var);
    switch (var)
    {
        case 1 :
        {
            printf(
                        "Enter your number : "
            );
            scanf("%d", &choix_joueur);
            valeur_a_trouver=10;
            plus_moins(choix_joueur, valeur_a_trouver);
            break;
        };
        case 2 :
        {
            system("clear");
            system("cat help.txt");
            break;
        };
        case 3 :
        {
            
            system("cat exit.txt");
            sleep(1);
            system("exit");
            system("clear");
        };
    }
    
   
}