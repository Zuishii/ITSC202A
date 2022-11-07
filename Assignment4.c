#include<Stdio.h>
#include<string.h>
#define COUNT 5

int getStrings(char content[COUNT][30]); // The prototypes
int isPalindrome(char content[COUNT][30]);
int reverseStr(char content[30]);

int main(void)
{

char content[COUNT][30];
isPalindrome(content);

}

 int getStrings(char content[COUNT][30])
{
    int i;
    int length = 0;
    int length2;
    for(int i=0; i<COUNT; i++)
    {
        printf("Please enter a string: ");
        fgets(content[i], 30, stdin);

             if(strlen(content[i]) >= length) // By making length = 0, content will keep updating if its bigger than the length in order to obtain the longest length
             {
             length = strlen(content[i]); // longest length
             }
     
    }
    printf("\nHeres the longest string length : %d\n", length-1); // -1 in order to account for the null

    
   
    
    
     
}

int reverseStr(char content[30])

{


 
 int start = 0; // start of the string
 int length = strlen(content)-1; // gets the string length and - 1 for the null variable
 int flag = 0;
 int hold = 0;


    for(start = 0; start < length; start++)
    {
       
        if(content[start] != content[length-start-1])
        {
            flag = 1; // 1 = true
            break;
        }
       
    }
    if(flag) 
    {
        printf("This is not a palindrome: %s", content);
        
    } else {
        printf("This is a palindrome: %s", content);
    }
     
}

int isPalindrome(char content[COUNT][30])
{

    
    
    getStrings(content);
    for(int i = 0; i<COUNT; i++)
    {
        reverseStr(content[i]); // incrementing through all of the strings so ill be able to put in reverse string
    }
    
    



}





