#include<stdio.h>
typedef struct{
        int hr;
	int mn;
	int se;
	}time;
void time_add(time *t1,time *t2,time *r);
void time_sub(time *t1,time *t2,time *r);

void main(){
     time r;
     time t1;
     time t2;
     printf("\nEnter time in HH_MM_SS format :");
     scanf("%d%d%d",&t1.hr,&t1.mn,&t1.se);
     printf("\nEnter another time variable :");
     scanf("%d%d%d",&t2.hr,&t2.mn,&t2.se);
     time_add(&t1,&t2,&r);
     printf("\nThe added time is %d:%d:%d\n",r.hr,r.mn,r.se);
     time_sub(&t1,&t2,&r);
     printf("\nThe subtracted time is %d:%d:%d\n\n",r.hr,r.mn,r.se);
     }

void time_add(time *t1, time *t2,time *r){
     int temp1;
     int temp2;
     temp1 = t1->se + t2->se;
     if(temp1>=60){
       r->mn = r->mn + 1;
       temp2 = temp1 - 60;
       r->se = temp2;
       }
     else
       r->se = temp1;
     temp1 = t1->mn + t2->mn;
     if(temp1>=60){
       //printf("\n before hr %d -", r->hr);
       r->hr = 0;
       r->hr = r->hr + 1;
       //printf("hr %d", r->hr);
       temp2 = temp1 - 60;
       r->mn = temp2;
       }
       else
       r->mn = temp1;
     r->hr = r->hr + t1->hr + t2->hr;
     //printf("\n hr %d -", r->hr);
     }

void time_sub(time *t1,time *t2,time *r){
     if(t1->se<t2->se){
       t1->se = t1->se + 60;
       t1->mn = t1->mn - 1;
       }
     r->se = t1->se - t2->se;
     if(t1->mn<t2->mn){
       t1->mn = t1->mn + 60;
       t1->hr = t1->hr - 1;
       }
     r->mn = t1->mn - t2->mn;
     r->hr = t1->hr - t2->hr;
     }
