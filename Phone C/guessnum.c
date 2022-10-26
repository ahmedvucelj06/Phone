#include<stdio.h>
#include<time.h>
#include<windows.h>


int main()
{
    system("cls");
    system("color 09");
    int pogodiBroj;
    int broj;
    int pokusaj = 4;
    int jedinica;
    
   

    srand(time(NULL));

    broj = (rand() % 100);
    jedinica = broj % 10;

    while(pokusaj > 0)
    {
        
        printf("\n\nPogodite broj izmedju 1-99: ");
        
        scanf("%d", &pogodiBroj);
        sleep(1);

        if (pogodiBroj != broj)
        {
            pokusaj--;
            printf("\nNiste pogodili broj, imate jos: %d pokusaj/a; ", pokusaj);
            sleep(1);
            
        } else if (pogodiBroj == broj) 
        {
            printf("\nPogodili ste broj, broj je %d. ", broj);
            sleep(1);
            return 0;
        }

        if (pokusaj == 2)
        {
            printf("\nhint: desetica tog broja je: %d; ", broj / 10);
            sleep(1);
        } else if (pokusaj == 1 && jedinica % 2 == 0)
        {
            sleep(1);
            printf("\nhint: jedinica tog broja je paran broj. \n");
        } else if (pokusaj == 1 && jedinica % 2 == 1) {
            sleep(1);
            printf("\nhint: jedinica tog broja je neparan broj. \n");
        }

        if (pokusaj == 0)
        {   
            printf("\nNemate vise pokusaja. ");
            printf("\nBroj je: %d.", broj);
            sleep(1);
            return 0;   
        }
        if(pogodiBroj >= 100)
        {
            sleep(1);
            printf("\n\n!!Error, broj je veci od limita, pokusaj vam se vraca!! \n");
            pokusaj++;
        } else if (pogodiBroj <= 0)
        {
            sleep(1);
            printf("\n\n!!Error, broj je manji od pocetnog broja, pokusaj vam se vraca!! \n");
            pokusaj++;
        }
    }
    return 0;
}