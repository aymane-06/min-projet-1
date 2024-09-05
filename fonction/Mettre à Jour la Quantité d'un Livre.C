char recherch[50];
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
