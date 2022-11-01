#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, sum2, j; 
	float float1, sum1, i;

	for(float1 = 0; i <= 4; i++) {
		printf("Enter float number: ");
		scanf("%f", &float1);		
		sum1 += float1;
}	
		printf("The sum is: %.2f\n", sum1);
		printf("The avergae is: %.2f\n", sum1 / 5);
		if(sum1 > 20.02f) {
			printf("The sum is greater than 20.02\n");
		}	else if(sum1 < 20.02) {
			printf("The sum is less than 20.02\n");
		}	else if(sum1 = 20.019) {
			printf("The sum is equal to 20.02\n");
		}
		 
		 		 
		 printf("==============================================================\n");
		 
	for(num1 = 0; j <= 4; j++) {
		printf("Enter an integer: ");
		scanf("%d", &num1);
		
		sum2 += num1;
}
		
		printf("The sum is: %d\n", sum2);
		printf("The average is: %.2f\n", sum2 / 5.0);
			if(sum2 % 2 == 0){
				printf("The sum is even\n");
			} else {
				printf("The sum is odd\n");
			} 
			
				
return 0;


}
