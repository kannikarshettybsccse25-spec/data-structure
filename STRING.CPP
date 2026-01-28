#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
char a[50],b[50],c;
int count=0,i;
printf("enter a string: ");
gets(a);
for(i=0;i<strlen(a);i++)
{
c=tolower(a[i]);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
count++;
} }
printf("no. of vowels:%d\n",count);
return 0;
}