#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the number");
scanf("%d",&a);
b=a;
while(a!=0)
{
rem=a%10;
c=c*10+rem;
a/=10;
}
if(c==b)
printf("%d is a palindrome",b)
else
printf("%d i a not a palindrome",b)
}