#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
int main(){
	int get_first_weekDay(int year)
{
    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}

int year,day=0,dayInMonth,weekDay=0,startingDay,month;
    char nazadammar[20];
    nazadammar1:
    printf("Unesite godinu: ");
    scanf("%d",&year);
    char *months[]={"Januar","Februar","Mart","April","Maj","Jun","Jul","Avgust","Septembar","Oktobar","Novembar","Decembar"};
    int monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        monthDays[1]=29;
    }
    startingDay=get_first_weekDay(year);
    for(month=0;month<12;month++)
    {
        dayInMonth=monthDays[month]+1;
        printf("\n\n------------------%s----------------",months[month]);
        printf("\n  Ned   Pon  Uto  Sre  Cetv Pet  Sub\n");
        for(weekDay=0;weekDay<startingDay;weekDay++)
        {
           printf("     ");
        }
        for(day=1;day<dayInMonth;day++)
        {
            printf("%5d",day);
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }
            startingDay=weekDay;
        }
	}
	printf("\n");
	printf("\nUkoliko zelite da opet uneste godinu upisite 'Again', a ako zelite da se vratite nazad upisite 'Back'\n");
	scanf("%s",&nazadammar);
	if(strcmp(nazadammar,"Again")== 0){
		system("CLS");
		goto nazadammar1;
	}
	if(strcmp(nazadammar,"Back")== 0){
		system("CLS");
	}
	else {
		printf("Izabrali ste nepostojecu opciju.");
	}
	
	}