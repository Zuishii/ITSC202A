#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, box, box2;
	
	printf("Enter size: ");
	scanf("%d", &box);
	box2 = box;
	for(i = 1; i <= box; i++){
				for(j = 1; j <= box2; j++)
					if(j==1 || i==1 || i==box || j==box2){
						printf(" * ");
						} else if (i < j){
							printf(" * ");
							
					} else {
						printf("   ");
					}
						printf("\n");
							
								
				
							
				}
						
							
			
	
			
		
		


return 0;
}
