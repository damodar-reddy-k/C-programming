#include<stdio.h>
typedef struct{
               double r;
	       double i;
	       }complex; //Declaration of structure with typedef

void complex_add(complex *a,complex *b,complex *c);
void complex_sub(complex *s,complex *b,complex *c);
void complex_mul(complex *m,complex *b,complex *c);
void complex_div(complex *d,complex *b,complex *c); //Declarations of all 4 operations - add,sub,mul,div

void main(){ //main function to implement the declared functions
     complex a;
     complex s;
     complex m;
     complex d;
     complex b;
     complex c;
     printf("\nEnter the real and imaginary parts of the complex number(complex1) : ");
     scanf("%lf%lf",&b.r,&b.i);
     printf("\nEnter another one (complex2) : ");
     scanf("%lf%lf",&c.r,&c.i);
     complex_add(&a,&b,&c); //addition
     printf("\nThe added complex is %.2lf + %.2lfi",a.r,a.i);
     complex_sub(&s,&b,&c); //subtracton
     printf("\nThe subtracted complex(complex1 - complex2) is %.2lf + %.2lfi",s.r,s.i);
     complex_mul(&m,&b,&c); //multiplication
     printf("\nThe multiplied complex(complex1 * complex2) is %.2lf + %.2lfi",m.r,m.i);
     complex_div(&d,&b,&c); //division
     printf("\nThe divided complex(complex1/complex2) is %.2lf + %.2lfi\n\n",d.r,d.i);
     }
void complex_add(complex *a,complex *b,complex *c){ //function to perform complex addition
     a->r = b->r + c->r ;
     a->i = b->i + c->i ;
     }
void complex_sub(complex *s,complex *b,complex *c){ //function to perform complex subtraction
     s->r = b->r - c->r;
     s->i = b->i - c->i;
     }
void complex_mul(complex *m,complex *b,complex *c){ //function to perform complex multiplication
     m->r = (b->r * c->r) - (b->i * c->i);
     m->i = (b->r * c->i) + (b->i * c->r);
     }
void complex_div(complex *d,complex *b,complex *c){ //function to perform complex division
     d->r = ((b->r * c->r) + (b->i * c->i)) / ((c->r * c->r) + (c->i * c->i));
     d->i = ((b->i * c->r) - (b->r * c->i)) / ((c->r * c->r) + (c->i * c->i)); 
     }
