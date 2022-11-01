#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{

	int var1;
	char char1;
	char char2[40];
	char char3[40];
	char num2[40];
	int i, j;
	char num3[40];
	

	
	
	for(i=0; i<=1000; i++){
	
	printf("\n===============================================\n");
	printf("Please choose operation from the menu\n");
	printf("1. Reverse Titlecase\n");
	printf("2. Upper to Lower case toggle\n");
	printf("q. Quit\n");	
	
	printf("Enter Choice: ");
	scanf("%s",&char1);
	getchar();
	

	if(char1 == 'q'){
	printf("\t****LEAVING OPERATION****\n");
	
	return 1;
	}
	
	if(char1 == '1'){
	printf("*** Enter a string of length <= 40: ");
	scanf("%[^\n]s", char2); // allow spaces in string
	for(i=0; char2[i]; i++){ // "char2[i]" same as "/0"
 	if(i==0){ // checking whenever i is equal to 0
	 
			if(char2[i] >= 'A' && char2[i] <= 'Z') // make it lowercase
				char2[i] = char2[i] + 32;
				} else if(char2[i]==32){ // checking spaces
							++i;
						if(char2[i] >= 'A' && char2[i] <= 'Z') // making it lowercase
							char2[i] = char2[i] + 32;
							} else if (char2[i] >= 97 && char2[i] <= 122){ // if not equal to 0, its upercase
										char2[i] = char2[i] - 32;
									} else {
											char2[i] = char2[i];
										}

							}
		printf("\t*** Reverse Title Case: %s", char2);
					}	
	
	if(char1 == '2'){
	printf("*** Enter a string of length <= 40: ");
	scanf("%[^\n]s", char3);
	for(j=0; j<sizeof(char3); j++){
		if(j % 2 == 0){ 
				if(char3[j] >= 'a' && char3[j] <= 'z')
					char3[j] = char3[j] - 32;
						} else if (char3[j] >= 'A' && char3[j] <= 'Z'){
							char3[j] = char3[j] + 32;
							} else {
								char3[j] = char3[j];
								}
	}
	printf("UpperLowerToggle: %s", char3);
	

}
	




	if(char1 >= 'A' && char1 <= 'Z'){
	printf("\t****NO SUCH OPTION IN MENU!!! PLEASE TRY AGAIN****\n");
	}
	
	if(char1 >= 'a' && char1 <= 'z'){
	printf("\t****NO SUCH OPTION IN MENU!!! PLEASE TRY AGAIN****\n");
	} else {
	char1 = char1;
	}

}
return 0;
}
