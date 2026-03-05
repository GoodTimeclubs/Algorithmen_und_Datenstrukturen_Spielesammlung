#include <stdio.h>
#include "binary_search.h"

int main(){
    printf("Herzlich Willkommen zum Algdat Menue (Bitti nicht durchfallen)\n");
    printf("Bitte waehle eine der Optionen:\n");
    printf("[1] Algorithmen ausprobieren\n");
    printf("[alles andere] gibs noch nix anderes\n");
    int choice = 0;
    scanf("%d", &choice);
    
    if(choice == 1){
        printf("Welchen Algorithmus moechtest du dir anschauen?\n");
        printf("[1] BINARY-SEARCH(A,l,r,k)\n");
    
        choice = 0;
        scanf("%d", &choice);
        switch(choice){
            case 1:
            binarysearch();
        }
    }
    
    return 0;
}
