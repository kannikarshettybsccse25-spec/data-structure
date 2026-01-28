#include<stdio.h>
#include<string.h>

int main()
{
char str1[50],str2[50];

printf("\nEnter a string:  ");
gets(str1);

strcpy(str2, str1);
strrev(str2);

if (strcmp(str1,str2)==0)
printf("The string is a palindrome");
else
printf("The string is not a palindrome");

return 0;
}