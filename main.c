#include <stdio.h>
/************************************variables gobales***********************************/
float notes[30];
int nbnotes=0;
/***********************************signatures*******************************************/
void saisieNote();
float calculMoyenne();

/************************************saisie de note**************************************/
void saisieNote() {
 printf("Veuillez saisir une note moyenne");
 scanf("%f",&notes[nbnotes]);
 nbnotes++;

}
/**********************************calcul de la moyenne************************************/
float calculMoyenne() {
    float somme=0;
    for(int i=0;i<nbnotes;i++)
    {
        somme+=notes[i];
    }
    return somme/nbnotes;
}
/***************************************main************************************************/

int main() {
    for(int i=0;i<30;i++)
    {
        saisieNote();
        printf("la moyenne de la classe est de %0.2f\n",calculMoyenne());
    }
    return 0;
}