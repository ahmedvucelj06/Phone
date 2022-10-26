#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

#define KAMEN 1
#define PAPIR 2
#define MAKAZE 3

void pkm(void)
{

    system("cls");
    system("color 04");


    srand( time(NULL) );
    
    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;
    
    do
    {
      
        printf("Sta zelite da igrate.\n");
        printf("1. Kamen\n");
        printf("2. Papir\n");
        printf("3. Makaze\n");
        printf("Izaberite: ");
        scanf("%d", &player_throw);
      
        sleep(1);
      
      
        ai_throw = (rand() % 3) + 1;
      
    
        if (ai_throw == KAMEN)
            printf("\nAI je izabrao Kamen.\n");
        else if (ai_throw == PAPIR)
            printf("\nAI je izabrao Papir.\n");
        else if (ai_throw == MAKAZE)
            printf("\nAI je izabrao Makaze.\n");
      
        sleep(1);
        
        draw = false;
        if (player_throw == KAMEN && ai_throw == MAKAZE)
            printf("\nKAMEN pobedjuje MAKAZE. Pobedio si.\n\n");
        else if (player_throw == KAMEN && ai_throw == PAPIR)
            printf("\nPAPIR pobedjuje KAMEN. Izgubio si.\n\n");
        else if (player_throw == MAKAZE && ai_throw == PAPIR)
            printf("\nMAKAZE pobedjuje PAPIR. Pobedio si.\n\n");
        else if (player_throw == MAKAZE && ai_throw == KAMEN)
            printf("\nKAMEN pobedjuje MAKAZE. Izgubio si.\n\n");
        else if (player_throw == PAPIR && ai_throw == KAMEN)
            printf("\nPAPIR pobedjuje KAMEN. Pobedio si.\n\n");
        else if (player_throw == PAPIR && ai_throw == MAKAZE)
            printf("\nMAKAZE pobedjuje PAPIR. Izgubio si.\n\n");
        else
        {
            printf("\nJednako! Igraj ponovo.\n\n");
        draw = true;
        }
        
        sleep(1);
        
    } while (draw);
    
}

int main()
{
    pkm();
  
    return 0;
}