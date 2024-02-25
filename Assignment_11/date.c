#include<stdio.h>
typedef struct{
        int date;
	int month;
	int year;
	}date;
void tmrw_date(date *tomorrow,date *today);
void main(){
     date today;
     date tomorrow;
     printf("\nEnter today's Date(please use space instead of hyphen and slash) : ");
     scanf("%d%d%d",&today.date,&today.month,&today.year);
     tmrw_date(&tomorrow,&today);
     printf("\nTomorrow's date is %d/%d/%d \n\n",tomorrow.date,tomorrow.month,tomorrow.year);
     }
void tmrw_date(date *tomorrow,date *today){
     tomorrow->date = today->date;
     tomorrow->month = today->month;
     tomorrow->year = today->year;
     if((today->date !=30) && (today->date !=31) && (today->month !=2) && (today->month !=12)){
       tomorrow->date++;
       }
     else if(today->date == 30 && today->month ==(4||6||9||11)){
            tomorrow->month++;
	    tomorrow->date = 01;
            }
     else if(today->date == 30 && today->month ==(1||3||5||7||8||10||12)){
            tomorrow->date++;
	    }
     else if(today->date == 31 && today->month ==(1||3||7||8||10)){
            tomorrow->date = 01;
	    tomorrow->month++;
	    }
     else if(today->date == 31 && today->month == 12 ){
            tomorrow->date = 01;
	    tomorrow->month = 01;
	    tomorrow->year++;
	    }
     else
     printf("\n this leap year exception is yet to be handled\n\n");
     }
       
