#include<stdio.h> // include stdio.h library
int check_prime(int n);
int main(void)
{   
    int start, end, i;
    printf("\nEnter the Range of Numbers\n\n");
    printf("Enter the First Number: ");
    scanf("%d",&start);
    printf("Enter the Last Number: ");
    scanf("%d",&end);
    printf("\nThe TWIN-PRIME No.s in the range %d and %d are :-\n",start,end);
    for(i = start; i < end; i++)
    {
        if(check_prime(i) && check_prime(i + 2))
        {            
            printf("{%d, %d}\n", i, i + 2);
            i = i + 1; 
        }                
    }    
    return 0; // return 0 to operating system
}
int check_prime(int n)
{
	int i;
    if(n == 1)
    {
        return 0;
    }
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;   // number is not prime
        }
    }
    return 1;    // number is prime
}
