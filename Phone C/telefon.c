#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    int  broj,code,mojbroj;
    char kontakt[1000];
    char poruka[1000];
    char opcija[1000];
    char opcija2[1000];
    char back[1000];
    
    
    
        code:
    
        system("color 0b");
        
        printf("\t\t\t\t______________________________________________\n\n");
        printf("\t\t\t\t\tUnesite Dialing Code: ");
        scanf("%d", &code);
        
        
        
        printf("\n");
        
        switch (code)
        {
            case 381:
                printf("\t\t\t\t\tSerbia, validan dialing code!");
                break;
            
            case 355:
                printf("\t\t\t\t\tAlbania, validan dialing code!");
                break;
            
            case 387:
                printf("\t\t\t\t\tBosnia/Hercegovina, validan dialing code!");
                break;
            
            case 673:
                printf("\t\t\t\t\tBulgaria, validan dialing code!");
                break;
            
            case 385:
                printf("\t\t\t\t\tCroatia, validan dialing code!");
                break;
                
            case 49:
                printf("\t\t\t\t\tGermany, validan dialing code!");
                break;
            
            
            case 30:
                printf("\t\t\t\t\tGreece, validan dialing code!");
                break;
            
            
            case 389:
                printf("\t\t\t\t\tMacedonia, validan dialing code!");
                break;
            
            
            case 382:
                printf("\t\t\t\t\tMontenegro, validan dialing code!");
                break;
            
            
            default:
                printf("\t\t\t\t\tDialing Code nije validan.\n");
                break;
                
        }
    printf("\n");+
    printf("\t\t\t\t______________________________________________\n\n");
 
    printf("\t\t\t\t\t ______________________ \n");
    printf("\t\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|      1    2    3      |\n");
    printf("\t\t\t\t\t|      4    5    6      |\n");
    printf("\t\t\t\t\t|      7    8    9      |\n");
    printf("\t\t\t\t\t|      #    0    +      |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|   Enter number here   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t\t(_______________________)\n\n"); 
    
    
    printf("\t\t\t\t\tUnesite broj ovde: ");
    scanf("%d", &broj);
    
    printf("\t\t\t\t______________________________________________\n\n");
    
    printf("\t\t\t\t\tUneli ste broj %i\n",broj);
    
    system("CLS");
    
    printf("\t\t\t\t______________________________________________\n\n");
    
    
    printf("\t\t\t\t\t ______________________ \n");
    printf("\t\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|      Unesite ime      |\n");
    printf("\t\t\t\t\t|   zeljenom kontaktu   |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t| _____________________ |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t\t(_______________________)\n\n"); 
    
    printf("\t\t\t\t______________________________________________\n\n");
    
    
    printf("\t\t\t\tUnesite zeljeno ime novom kontaktu: ");
    scanf("%s", &kontakt);
    
    
    printf("\n");
    
    printf("\t\t\t\t\tKontakt je sacuvan\n");
    
    system("CLS");
    
     printf("\t\t\t\t______________________________________________\n\n");
     
    printf("\t\t\t\t\t ______________________ \n");
    printf("\t\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|  Poziv -  Nazad - SMS |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|    Zelite li da se    |\n");
    printf("\t\t\t\t\t|   vratite na pocetak  |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t| Izaberite vasu opciju |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t\t(_______________________)\n\n"); 
    
    printf("\t\t\t\t______________________________________\n\n");
    
    printf("\t\t\t\t\tIzaberite vasu opciju: ");
    scanf("%s",&opcija);
    
    printf("\n");
    printf("\t\t\t\t______________________________________\n\n");
    
    if(strcmp(opcija,"Nazad")== 0)
    {
    system("CLS");
    goto code;
    }
    
    if(strcmp(opcija,"Poziv")== 0)
    {
         
    printf("\t\t\t\t\t______________________ \n");
    printf("\t\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|  ___________________  |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|   Trenutno pozivate   |\n");
    printf("\t\t\t\t\t|       ovaj broj...    |\n");
    printf("\t\t\t\t\t|   __________________  |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t\t(_______________________)\n"); 
    printf("\t\t\t\t______________________________________\n\n");
    printf("\t\t\t\t\tUpisite 'Back' da prekinete poziv: ");
    scanf("%s", back);
    if(strcmp(back, "Back")== 0)
    {
        system("CLS");
        goto code;
    }
    
    }
    
    if (strcmp (opcija, "SMS") == 0)
    {
        printf("\t\t\t\tUnesite sta zelite da posaljete +%d %d.\n",code,broj);
        
        printf("\t\t\t\tVasa poruka:  ");
        scanf("%s", poruka);
        
            printf("\t\t\t\t______________________________________\n\n");
        printf("\t\t\t\tUnesite 'Back' ako zelite da se vratite nazad\n\t\t\t\t");
        scanf("%s",&back);
    if(strcmp(back,"Back")== 0){
        system("CLS");
        Sleep(400);
        goto code;
    }
    }
    
    
    
    return 0;
}
