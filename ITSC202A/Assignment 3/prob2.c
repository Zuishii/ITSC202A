#include<stdlib.h>
#include<stdio.h>

int main()
{
	int i, j, p;
	int var[6];
	char char1[6];
	
	
	printf("==============================================\n");
	
	for(j=0; j<=5; j++){
	printf("Enter integer number %d: ", j+1);
	scanf("%d", &var[j]);
	}
	
	
	printf("==============================================\n");
	printf("Enter 6 characters separated by space: ");
	scanf(" %c %c %c %c %c %c", &char1[0], &char1[1], &char1[2], &char1[3], &char1[4], &char1[5]);
					
	printf("=============================================================================\n");
	printf("\tElement \tAddress \tHexadecimal Value \tDecimal Value\n");
	printf("=============================================================================\n");
	
	for(i=0;i<=5; i++){
	printf("\tvar[%d] \t%p \t\t%#08x \t\t%d\n", i,&var[i], var[i], var[i]);
	printf("%d\n", var[2]-var[1]);
	
	}
	printf("=============================================================================\n");
	printf("\tElement \tAddress \tHexadecimal Value \tCharacter Value\n");
	printf("=============================================================================\n");
	
	
	for(p=0;p<=5; p++){
	printf("\tchar[%d] \t%p \t\t%#08x \t\t%c\n", p,&char1[p], char1[p], char1[p]);
	}
	
return 0;
}
