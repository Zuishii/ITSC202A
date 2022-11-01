#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, num1, num2;
	
	printf("Enter size: ");
	scanf("%d", &num1);
	
	num2 = num1;
		
	if(num1 % 2 == 0){
		printf("INVALID OPERATION\n");
		return 1;
	}
	
			for(i=0; i <= num1; i++){
				for(j=0; j <= num2/2; j++) 	
				if(i % 2 == 0){
					printf("\\/");
			      } else {
			      	printf("/\\");
			      }
			      
			      printf("\n");
			   
}     
			       

return 0;
}
