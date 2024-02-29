#include<stdio.h>


void main(int argc, char *argv[]){                  //copy the file pointers of the given two files
	FILE *f1,*f2; int flag =1; 		    //Declaration of necessary variables.
	char x1,x2;
	f1 = fopen(argv[1],"r");                    //opening the files in read mode.
	f2 = fopen(argv[2],"r");
  	while((x1=fgetc(f1))!=EOF && (x2=fgetc(f2))!=EOF){
	         if(x1==x2)
		     printf("\n so far so good and %c \n",x1);		   //comparing the strings in each file one by one.
	         break;                  //if comparison gives false then print the whole line from both the files and also change the marker value to 0.
	                           //do nothing and let the loop running
		}
	                           //If EOF is reached on both files and the marker value is still 1, print both are same
	
	}
