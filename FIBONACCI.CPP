#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 int fib[20];

 clrscr();

 printf("enter number of terms:")
 scanf("%d", &n);
 fib[0] = 0;
 fib[1] = 1;
 for(i = 2; i < n; i++)
 {
   fib[i] = fib[i-1] + fib[i-2];
 }
 printf("fibonacci series:\n");
 for(i = 0; i < n; i++)
 {
 printf(fib[i] " ");
 }
 getch();
 }
