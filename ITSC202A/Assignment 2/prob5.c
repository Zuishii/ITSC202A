#include<stdio.h>
#include<stdlib.h>

int main()
{	
	char hexval1, hexval2, hexval3, hexval4;
	
	int cube16, num1, num2, num3, num4, result;
	
	printf("Enter a 4-digit hex number: ");
	scanf("%s,%s,%s,%s" , &hexval1, &hexval2, &hexval3, &hexval4);
	
	
	if(hexval1 >= '0' && hexval1 <= '9'){
		num1 = hexval1 - 48;
	} else if (hexval1 >= 'A' && hexval1 <= 'F') {
		num1 = hexval1 - 55;
	}
			if(hexval2 >= '0' && hexval2 <= '9'){
				num2 = hexval2 - 48;
			} else if (hexval2 >= 'A' && hexval2 <= 'F') {
				num2 = hexval2 - 55;
			}
					
					if(hexval3 >= '0' && hexval3 <= '9'){
						num3 = hexval3 - 48;
					} else if (hexval3 >= 'A' && hexval3 <= 'F') {
						num3 = hexval3 - 55;
			}
								if(hexval4 >= '0' && hexval4 <= '9'){
									num4 = hexval4 - 48;
									} else if (hexval4 >= 'A' && hexval4 <= 'F') {
										num4 = hexval4 - 55;
			}
			
			cube16 = 4096;
			
			num1 *= cube16;
			cube16>>=4;
			num2 *= cube16;
			cube16>>=4;
			num3 *= cube16;
			cube16>>=4;
			num4 *= cube16;
			
			result = num1 + num2 + num3 + num4;
					

		printf("%d is the decimal equivalent of %s\n", result, &hexval1);
	
	
	
	
	
	
	
	


	
	
	
	
	
	
	
	
	
	
return 0;

}
	
	
		
	
