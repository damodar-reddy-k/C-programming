//This is the header file

struct poly{
	int coeff;
	int exp;
	struct poly* next;
};
typedef struct poly* polyptr;
typedef struct poly poly;

polyptr createpoly();

polyptr insert_asc_order(polyptr H,int c,int e);

polyptr addpoly(polyptr A,polyptr B);

void display(polyptr A);
