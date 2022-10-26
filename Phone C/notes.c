#include<stdio.h>
#include<windows.h>

int beleske()
{
    int odabir, odabir1, odabir2;
    char beleska1[10000];
    char beleska2[10000];
    char beleska3[10000];
    FILE * beleska = fopen("beleska.txt", "w");

    
    
    pocetak:
    system("cls");
    printf("\t\t\t\t _______________________\n");
    printf("\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|   1.Napravi belesku   |\n");
    printf("\t\t\t\t|   2.Pogledaj belesku  |\n");
    printf("\t\t\t\t|   3.Izadji            |\n");
    printf("\t\t\t\t|                       |\n"); 
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t(_______________________)\n");

    printf("\t\t\t\tOdaberi: ");
    scanf("%d",&odabir);
    
    if (odabir == 1)
    {
        system("cls");
        printf("Beleska: ");
        scanf(" %[^\n]%*c",beleska1);

        
        fprintf(beleska, "beleska 1: %s", beleska1);
        

        
        
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje             |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje----         |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje--------     |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje------------ |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje-------------|\n"); 
        printf("\t\t\t\t|--------               |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t| Beleska napravljena.  |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        printf("\n\n\t\t\t\tbeleska: %s",beleska1);
        

        
        
    }

    else if (odabir == 2)
    {
        printf("\nBeleska 1: %s ", beleska1);
        printf("\nBeleska 2: %s ", beleska2);
        printf("\nBeleska 3: %s ", beleska3);
    }

    else if (odabir == 3)
    {
        printf("\t\t\t\tBye Bye...");
        return 0;
    } else {
        printf("\nUneli ste nepostojeci broj.");
        sleep(1);
        system("cls");
        goto pocetak;
    }

    printf("\n\t\tSta zelite dalje: ");
    printf("\n1.Vrati me na pocetak.");
    printf("\n2.Zavrsi program.");
    printf("\n3.Napravi jos jednu belesku.");
    printf("\nOdaberi: ");
    scanf("%d",&odabir1);

    if(odabir1 == 1)
    {
        goto pocetak;
    } 
    else if (odabir1 == 2)
    {   
        printf("\t\t\t\tBye Bye...");
        return 0;
    } 
    else if (odabir1 == 3)
    {
        system("cls");
        printf("Beleska: ");
        scanf(" %[^\n]%*c",beleska2);

        
        fprintf(beleska, "\n\nbeleska 2: %s", beleska2);
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje             |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje----         |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje--------     |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje------------ |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje-------------|\n"); 
        printf("\t\t\t\t|--------               |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t| Beleska napravljena.  |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        printf("\n\n\t\t\t\tbeleska: %s",beleska2);
        
        
    }

    printf("\n\t\tSta zelite dalje: ");
    printf("\n1.Vrati me na pocetak.");
    printf("\n2.Zavrsi program.");
    printf("\n3.Napravi jos jednu belesku.");
    printf("\nOdaberi: ");
    scanf("%d",&odabir2);

    if (odabir2 == 1)
    {
        goto pocetak;
    } else if (odabir2 == 2)
    {
        printf("Bye Bye...");
        return 0;
    } else if (odabir2 == 3)
    {
        system("cls");
        printf("Beleska: ");
        scanf(" %[^\n]%*c",beleska3);

        
        fprintf(beleska, "\n\nbeleska 3: %s", beleska3);
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje             |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje----         |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje--------     |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje------------ |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje-------------|\n"); 
        printf("\t\t\t\t|--------               |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        sleep(1);

        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t| Beleska napravljena.  |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");

        printf("\n\n\t\t\t\tbeleska 3n: %s",beleska3);
        fclose(beleska);
        
        sleep(3);
        printf("\n\t\tSada cete se vratiti na pocetak...");
        printf("\n\t\tMaximum 3 beleske mozete napraviti.");
        sleep(5);
        system("cls");

        goto pocetak;
    }
    

}
int main()
{
    
    system("cls");
    system("color 04");
    
    printf("\t\t\t\t-------------------------\n");
    printf("\t\t\t\t---------BELESKE---------\n");
    printf("\t\t\t\t-------------------------\n\n\n");

    beleske();

    return 0;
}