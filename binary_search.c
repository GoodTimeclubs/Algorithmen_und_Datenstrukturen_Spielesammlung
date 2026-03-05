#include "binary_search.h"
#include "printArray.h"
#include <stdio.h>
void binarysearch(){
    printf("Bitte befuelle zuerst das Array\n");
    printf("WICHTIG: Die Reihenfolge der Zahlen muss aufsteigend sein!\n");
    int size = 10;
    int A[size];
    for(int i = 0; i < size; i++){
        printf("Bitte gib die Zahl am index %d an: ",i);
        scanf("%d",&A[i]);
        printf("\n");
    }
    printf("Deine Eingabe:\n");
    printArray(A,size);

    printf("Nach welcher Zahl soll gesucht werden?");
    int wanted = 0;
    scanf("%d",&wanted);

    //Anfang von binarysearch
    int l = 0; //linker index des Suchbereichs
    int r = size-1; //rechter index des Suchbereichs
    int index = -1;
    int mid;
    while (index == -1) {
        if (r < l) index = -2; //abbruch
        printArrayPart(A,l,r);
        mid = (r+l)/2;
        if (wanted == A[mid]) {
            index = mid;
            printf("Zahl gefunden als mittelwert!\n");
        }
        else if(wanted > A[mid]) {
            l = mid+1;
            printf("Zahl groesser als der mittelwert %d\n",A[mid]);
        }
        else {
            r = mid-1;
            printf("Zahl kleiner als der mittelwert %d\n",A[mid]);
        }
    }
    if (index != -2) printf("Die Zahl wurde am Index %d gefunden\n",index);



}