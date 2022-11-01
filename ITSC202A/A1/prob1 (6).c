#include<stdio.h>

int main()

{	
	int a, b, c, d, e, s;
	float num1, num2, num3, num4, num5, avg, five, pp, avg2;
	avg = s / five;
	five = 5; 		// had to change five to = "5" because I was having problems later in my code//
	
	
	printf("======================================================\n");
	printf("Enter a integer: ");
	scanf("%d", &a);
	printf("Enter a integer: ");
	scanf("%d", &b);
	printf("Enter a integer: ");
	scanf("%d", &c);
	printf("Enter a integer: ");
	scanf("%d", &d);
	printf("Enter a integer: ");
	scanf("%d", &e);
	
	s = a + b + c + d + e; 					// using the variables I declared for integer to find the sum//
	
	
	printf("Heres the sum: %d\n", s); 		// Sum is added here, the "s" in the end allows the sum to be found//
	
	
	avg = s / five; 		// to find the avg //
	
	printf("Heres the average: %.2f\n", avg);	
	
	
	
	printf("======================================================\n");
	printf("Type Float: ");
	scanf("%f", &num1);
	printf("Type Float: ");
	scanf("%f", &num2);
	printf("Type Float: ");
	scanf("%f", &num3);
	printf("Type Float: ");
	scanf("%f", &num4);
	printf("Type Float: ");
	scanf("%f", &num5);
	
	pp = num1 + num2 + num3 + num4 + num5;
	printf("Heres the sum: %.2f\n", pp);
	
	avg2 = pp / five;
	printf("Heres the average: %.2f\n", avg2);
	printf("THANK YOU FOR USING\n\n");
	
	
	return 0;
		
}
