#include<stdio.h>
#define R 3
#define C 3

void add_matrix(double A[R][C],double B[R][C],double D[R][C]);
void sub_matrix(double A[R][C],double B[R][C],double D[R][C]);
void mult_matrix(double A[R][C],double B[R][C],double D[R][C]);
void out_matrix(double A[R][C];);
void input_matrix(double A[R][C];);
void main(){
       double M1[R][C];
       double M2[R][C];
       double mul[R][C];
       double add[R][C];
       double sub[R][C];
       printf("\n\n");
       printf("\t\t\tReading 1st Matrix\n"); 
       input_matrix(M1);
       printf("\t\t\tReading 2nd Matrix\n");
       input_matrix(M2);
 
      add_matrix(M1,M2,add);    //function for addition
      printf("\t\t\t\tAddition\n");
      out_matrix(add);
      sub_matrix(M1,M2,sub);    //function for subtraction
      printf("\t\t\t\tSubtraction\n");
      out_matrix(sub);
      mult_matrix(M1,M2,mul);   //function to multiplication
      printf("\t\t\t\tMultiplication\n");
      out_matrix(mul);
      }


//input of matrix
void input_matrix(double A[R][C]){
        int i,j;
        printf("Message : The default size of this matrix is %d * %d\n",R,C);
        for(i=0;i<R;i++){
             for(j=0;j<C;j++){
                  printf("Please enter the %d element of %d row : ",j+1,i+1);
                  scanf("%lf",&A[i][j]);
                  }
             }
         printf("\n\t\t\tYou have entered");
        out_matrix(A);
        }


//output of matrix
void out_matrix(double A[R][C]){
        int i,j;
        for(i=0;i<R;i++){
             printf("\n\t\t\t\t\t");
             for(j=0;j<C;j++){
                  printf(" %lf", A[i][j]);
                  }
             }
        printf("\n\n");
        }


//addition of matrices
void add_matrix(double A[R][C],double B[R][C],double D[R][C]){
     int i,j;
     for(i=0;i<R;i++){
        for(j=0;j<C;j++){
           D[i][j] = A[i][j] + B[i][j];
           }
        }
     }


//subtraction of matrices
void sub_matrix(double A[R][C],double B[R][C],double D[R][C]){
     int i,j;
     for(i=0;i<R;i++){
        for(j=0;j<C;j++){
           D[i][j] = A[i][j] - B[i][j];
           }
        }
     }
     
     
//multiplication of matrices
void mult_matrix(double A[R][C],double B[R][C],double D[R][C]){
     int j,p,q;
     for(p=0;p<R;p++){           //R indicates the rows in the final matrix.
        for(q=0;q<C;q++){        //C indicates the columns in the final matrix.
           for(j=0;j<C;j++){        //this C indicates either the total number of columns in first matrix or the the total number of rows in second matrix 
               D[p][q] = D[p][q] + (A[p][j]*B[j][q]);
              }
           }
        }
     }