#include<stdio.h>


void main(int argc, char *argv[]){                  //copy the file pointers of the given two files
	FILE *f1,*f2; int flag =1; 		    //Declaration of necessary variables.
	char x1,x2; char s1[20], s2[20];
	f1 = fopen(argv[1],"r");                    //opening the files in read mode.
	f2 = fopen(argv[2],"r");
  	while((s1=fgets(f1))!=EOF && (s2=fgets(f2))!=EOF){
	         if(s1==s2)
		     continue;
			else		   //comparing the strings in each file one by one.
	         printf("\n In else");                 //if comparison gives false then print the whole line from both the files and also change the marker value to 0.
	                           //do nothing and let the loop running
		}
	                           //If EOF is reached on both files and the marker value is still 1, print both are same
	
	}
