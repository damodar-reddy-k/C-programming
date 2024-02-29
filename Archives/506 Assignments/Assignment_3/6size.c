/*This program prints the size of different data types*/
#include<stdio.h>
#include<string.h>
int main()
{
printf("\n\nSize of integer is %ld\n",sizeof(int));
printf("\nSize of long integer is %ld\n",sizeof(long int));
printf("\nSize of short integer is %ld\n",sizeof(short int));
printf("\nSize of signed integer is %ld\n",sizeof(signed int));
printf("\nSize of unsigned integer is %ld\n",sizeof(unsigned int));
printf("\nSize of character is %ld\n",sizeof(char));
printf("\nSize of float is %ld\n",sizeof(float));
printf("\nSize of double is %ld\n",sizeof(double));
printf("\nSize of long double is %ld\n\n",sizeof(long double));
//printf("\nSize of string is %ld \n\n",sizeof( string));
return 0;
}

