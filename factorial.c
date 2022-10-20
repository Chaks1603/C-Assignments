/*
Summary: Factorial is represented using '!', so five factorial will be written as (5!),n factorial as (n!).
n! = n*(n-1)(n-2)(n-3)...3.2.1 and zero factorial is defined as one i.e. 0! = 1.
*/

#include <stdio.h>

int main()
{
	int c, n, fact = 1;
	
	printf("Enter a number to calculate it's factorial :");
	scanf("%d", &n);

		printf("\nFactorial of %d!= %d ", n, n);
    int i=n;
    for (c = 1; c <= n; c++)
    {
		fact = fact * c;
	
    	while (i>1)
      	{
	     --i;
	     printf("x %d ",i);
        } 
   }
    
	printf("= %d", fact);
	
	return 0;
}

