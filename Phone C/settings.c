#include<stdio.h>
#include<math.h>
#include<conio.h>
 
int main()
{
    
    int  lozinka;
    int i = 1;
    int k = 100;
    char  opcija[100], pitanje[1000], opcija2[1000], interface, opcija3[1000],iopcija[1000], ilozinka1[1000];
    char sopcija[1000], disable[1000], update[1000];
    float jton, jslika;
    
    
    
    
    system("color 0b");
    
    
    {
    
    interface:
    
    printf("\t\t________________________________________________________________\n\n");
    
    printf("\t\t\t\t _________________________ \n");
    printf("\t\t\t\t( --       (O)       --  )\n");
    printf("\t\t\t\t(________________________)\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|   Connections          |\n");
    printf("\t\t\t\t|   ________________     |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|   Sound                |\n");
    printf("\t\t\t\t|   Display              |\n");
    printf("\t\t\t\t|   Informacije          |\n");
    printf("\t\t\t\t|   Screen               |\n");
    printf("\t\t\t\t|   _________________    |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t(___     ___( )___    ___)\n"); 
    printf("\t\t\t\t(________________________)\n\n"); 
    
    printf("\t\t________________________________________________________________\n\n\n");
    
    printf("\t\t\t\tIzaberite koju opciju zelite: ");
    scanf("%s", &opcija);
    
    printf("\n\n");
    system("CLS");
    }
    
    if(strcmp(opcija, "Connections") == 0)
    {
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\tTrenutno ste povezani na 'Gimnazija' internet\n");
        
        printf("\t\t\t\tIP Adressa je 205.92.85.251.\n\n");
        printf("\t\t_____________________________________________________________\n\n");
        
        
        printf("\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", opcija3);
        
        if(strcmp(opcija3,"Back")== 0)
        {
        system("CLS");
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\tTrenutno ste povezani na 'Gimnazija' internet\n");
        printf("\t\t\t\t-Takodje dostupno - \n\n");
        printf("\t\t\t\tTaksim - === - Locked\n");
        printf("\t\t\t\tNBA - == - Unlocked\n");
        printf("\t\t\t\tiPhone - === - Unlocked\n");
        printf("\t\t\t\tKlupa - === - Unlocked\n");
        printf("\t\t\t\tKomsija - === - Locked\n\n");
        printf("\t\t_____________________________________________________________\n\n");
        }
        
        printf("\t\t\tUnesite ime interneta na koji zelite da se povezete: ");
        scanf("%s", iopcija);
        
        if(strcmp(iopcija,"Taksim")== 0)
        {
        system("CLS");
        printf("\t\t_____________________________________________________________\n\n");
        
       
        taksim: 
        printf("\t\t\tInternet Taksim je zakljucan!\n");
        printf("\t\t\tUnesite lozinku da bi ste pristupili internetu: ");
        scanf("%s", ilozinka1);
        if(strcmp(ilozinka1, "Taksim2016")== 0)
        {
        printf("\t\t\tPovezani ste na internet Taksim");
        Sleep(850);
        system("CLS");
        goto interface;
    }
        
        else 
        {
        	printf("\t\t_____________________________________________________________\n\n");
            printf("\t\t\tSifra nije tacna pokusajte ponovo.");
            Sleep(850);
            system("CLS");
            goto taksim;
    
        }
    }
        
        if(strcmp(iopcija, "Komsija")== 0)
        {
        printf("\t\t\tPovezali ste se na internet 'Komsija'!\n");
        Sleep(850);
        system("CLS");
        goto interface; 
    }
        if(strcmp(iopcija, "iPhone")== 0)
        {
        printf("\t\t\tPovezali ste se na internet 'iPhone'!\n");
        Sleep(850);
        system("CLS");
        goto interface;
    }
        if(strcmp(iopcija, "NBA")== 0)
        {
        printf("\t\t\tPovezali ste se na internet 'NBA'!\n");
        Sleep(850);
        system("CLS");
        goto interface;     
    }
        if(strcmp(iopcija, "Klupa")== 0)
        {
        printf("\t\t\tPovezali ste se na internet 'Klupa'!\n");
        Sleep(850);
        system("CLS");
        goto interface; 
        
    
        
    }
}
    
        if(strcmp(opcija, "Informacije") == 0)
    {
        printf("\t\t_____________________________________________________________\n\n");
        
        printf("\t\t\tModel vaseg telefona je iPhone X\n");
        printf("\t\t\tVas telefon je proizveden November 3, 2017\n");
        printf("\t\t\tVas provider je 'Telenor'\n");
        printf("\t\t\tVas broj telefona je +381 062123123\n");
        printf("\t\t\tVerzija vaseg uredjaje je 15.0.1\n");
        printf("\t\t\t=UPDATE= je dostupan!\n");
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\tUkucajte 'Update' da bi ste updajtovali verziju: ");
        scanf("%s", update);
        if(strcmp(update, "Update")== 0)
        {
            printf("\t\t\t\tUredjaj se updajtuje molimo vas sacekajte!\n\n");
            while ( i <= 100 )
            {
            	printf("\t\t\tUredjaj se trenutno Updejtuje molimo vas sacekajte!\n");
            	printf("\t\t\t\t\t\t __________\n");
                printf("\t\t\t\t\t|____%i%%____|\n", i);
                printf("\t\t\t\t\t\t \n");
                Sleep(250); 
                if ( i <= 100 )
                i++;
                system("CLS");
            }
            
        }
        
        
        
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        printf("\t\t_____________________________________________________________\n");
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
        
        
    }
    
    if(strcmp(opcija, "Screen") == 0)
    {
    printf("\t\t_____________________________________________________________\n\n");
    
 
    printf("\t\t\t\t _________________________ \n");
    printf("\t\t\t\t( --       (O)       --  )\n");
    printf("\t\t\t\t(________________________)\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|        Password        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|      1    2    3       |\n");
    printf("\t\t\t\t|      4    5    6       |\n");
    printf("\t\t\t\t|      7    8    9       |\n");
    printf("\t\t\t\t|           0            |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|  Unesite Vas Password  |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t(___     ___( )___    ___)\n"); 
    printf("\t\t\t\t(________________________)\n\n"); 
    printf("\t\t\t\tUnesite Vas Password: ");
    scanf("%i", &lozinka);
    
        printf("\t\t________________________________________________________________\n\n\n");
    
    if ( lozinka == 2005 )
    {
        printf("\t\t\t\tLozinka je Tacna!\n");
        printf("\t\t\t\tUkucajte 'Disable' ako zelite da onemogucite lozinku na ovom uredjaju: ");
        scanf("%s", disable);
        if(strcmp(disable, "Disable")== 0)
        printf("\t\t\t\tOnemogucili ste lozinku na ovom uredjaju!\n");
        
        
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
            
        
    }
    
    else
    {
    printf("\t\t\t\t ______________________ \n");
    printf("\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|   -Settings Locked-   |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|       Uneli ste       |\n");
    printf("\t\t\t\t|    pogresnu lozinku.  |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t(_______________________)\n"); 
    }
    
    printf("\t\t________________________________________________________________\n\n\n");
    
    
    
        
        printf("\t\t_____________________________________________________________\n\n");
        
        printf("\n\n");
        
        
        
        if(strcmp(opcija2,"Exit")== 0)
        {
        system("CLS");
        }
        }
    
    if(strcmp(opcija, "Sound") == 0)
    {
        printf("\t\t_____________________________________________________________\n\n");
        
        printf("\t\t\t\tJacina tona je trenutno 50 %%\n");
        printf("\t\t\t\tSound Mode je On\n\n");
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\t\tUpisite zeljenu jacinu tona: ");
        scanf("%f", &jton);
        
        printf("");
            printf("\t\t_____________________________________________________________\n\n");
        if ( jton == 50)
        {
        printf("\t\t\t\tTon je sada na 50 %%.\n");
        
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
    
    }
        else if ( jton ==75)
        {
        printf("\t\t\t\tTon je sada na 75 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
        
    }
        else if ( jton == 100)
        {
        printf("\t\t\t\tTon je sada na 100 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
        
    }   
        else if ( jton == 25)
        {
        printf("\t\t\t\tTon je sada na 25 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
    
    }
    
        else if ( jton = 0)
        {
        printf("\t\t\t\tTon je sada na 0 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
        
    }
        
        printf("\t\t_____________________________________________________________\n\n");
    }
    
    if(strcmp(opcija, "Display") == 0)
    {
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\t\tBrightness je trenutno 5%0%\n");
        printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
        
            printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\t\tUpisite zeljenu jacinu svetlosti na ekranu: ");
        scanf("%f", &jslika);
        
        printf("");
            printf("\t\t_____________________________________________________________\n\n");
        if ( jslika == 100)
        {
        printf("\t\t\t\tJacina je sada na 100%%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno je stetna!\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
    }
     else if ( jslika == 75)
        {
        printf("\t\t\t\tJacina je sada na 75 %%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno je stetna.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
    }
    
     else if ( jslika == 50)
        {
        printf("\t\t\t\tJacina je sada na 50 %%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
    }
    
     else if ( jslika == 25)
        {
        printf("\t\t\t\tJacina je sada na 25 %%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
    }
    
     else if ( jslika == 0)
        {
        printf("\t\t\t\tJacina je sada na 0 %%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto interface;
    }
    
    
    
    else 
    {
        
    }
    
 
    }
 else
     {
            printf("\t\t________________________________________________________________\n\n");
        printf("\t\t\t\tIzabrali ste nepostojecu funkciju.");
        Sleep(1000);
        system("CLS");
        goto interface;
        
     }
     return 0;
}