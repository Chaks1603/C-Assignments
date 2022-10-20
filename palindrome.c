#include <stdio.h>
int main()
{
    int num, rev = 0, temp; // declaration of variable
    printf(" Enter a number: ");// Asking for number to check
    scanf("%d",&num);
    temp = num; // Equalizing of temporary variable to the number
    while( temp != 0 ) // loop to reverse the number
    {
      rev = rev * 10;
      rev = rev + temp%10;
      temp = temp/10;
    }
    if ( num == rev ) // comparison of reverse with the original number
       printf(" %d is a Palindrome Number.", num);
    else
       printf(" %d is not a Palindrome Number.", num);
    return 0;
}
