#include <stdio.h>
#include <string.h>
int main(){
    int max_q_titre=50,max_l_titre=50;
    int max_q_auteur=50,max_l_auteur=50;
    int max_l_prix=50;
    int max_l_quantite=50;
int prix[max_l_prix];
int quantite[max_l_quantite];
char titre[max_q_titre][max_l_titre],auteur[max_q_auteur][max_q_auteur];
int n;
printf("entre la quantite du livre vous voule ajoute: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("entre le titre du livre: ");
scanf("%s",&titre[i]);
printf("entre le auteur du livre: ");
scanf("%s",&auteur[i]);
printf("entre le prix du livre: ");
scanf("%d",&prix[i]);
printf("entre la quantité du livre: ");
scanf("%d",&quantite[i]);
printf("=============================\n");
//if(n>i)
//    printf("<===============livre suivant=================>:\n");
//else if (n=i)
//printf("le livre est bien sauvgarde!!");
}
int i;
//for(i=0;i<n;i++){
//    printf("livre numero:%d\n",i+1);
//    printf("%s\n",titre[i]);
//    printf("%s\n",auteur[i]);
//    printf("%d\n",prix[i]);
//    printf("%d\n",quantite[i]);
//printf("=============================\n");
//}
/*char recherch[50];
printf("entre le titre de livre pour modifier sa quantite: ");
scanf("%s",&recherch);
for(i=0;i<n;i++){
        if(strcasecmp( recherch,titre[i]) == 0)
        int index=i;
        else
            printf("ce livre n'est pas disponible merci de le ajouté");
            int index=i;
        printf("modifier la quantite de livre %s:",titre[index]);
        scanf("%d",&quantite[index]);


}*/
/*char recherch[50];
printf("entre le titre de livre pour le supprimer: ");
scanf("%s",&recherch);
for(i=0;i<n;i++){
        if(strcasecmp( recherch,titre[i]) == 0)
        int index=i;
        else
            printf("ce livre n'est pas disponible merci de le ajouté");
            int index=i;
        for(i=index;i<n;i++){
            strcpy(titre[i],titre[i+1]);
            strcpy(auteur[i],auteur[i+1]);
                     prix[i]=prix[i+1];
                  quantite[i]=quantite[i+1];
                  n--;
        }
}*/
int S=0;
for(i=0;i<n;i++){
    S=S+quantite[i];
}
printf("La quantité des livres stoqué est :%d",S);



return 0;
}
