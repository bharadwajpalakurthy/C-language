//Add two integers using a function.

#include<stdio.h>

int main()
{
 int a,b;

 printf("Enter any two number using space as a sperator : ");
 scanf("%d %d", &a, &b);
 
 printf("\nThe result of adding %d and %d is %d\n",a,b,add(a,b));
 return 0;
}

 int add(int a, int b)
 {
  return a+b;
 }
