#include<stdio.h>

int main(void)
{
	short int aval = 100;
	int bval = 100;
	float cval = 100;
	double dval = 100;
	char eval = 100;
	unsigned char fval = 100;
	
	printf("Addr: %p, Value:  %d or hex: %#x,       sizeof: %lu bytes \n", &aval, aval, aval, sizeof(aval));
	
	printf("Addr: %p, Value:  %d or hex: %#x,       sizeof: %lu bytes \n", &bval, bval, bval, sizeof(bval));

   printf("Addr: %p, Value:  %.2f or hex: %#a,      sizeof: %lu bytes \n", &cval, cval, cval, sizeof(cval));

   printf("Addr: %p, Value:  %.2f or hex: %#a,      sizeof: %lu bytes \n", &dval, dval, dval, sizeof(dval));
   
   printf("Addr: %p, Value:  %c or hex: %#x,      sizeof: %lu bytes \n", &eval, eval, eval, sizeof(eval));
   
   printf("Addr: %p, Value:  %c or hex: %#x,      sizeof: %lu bytes \n", &fval, fval, fval, sizeof(fval));
	return 0;
}
