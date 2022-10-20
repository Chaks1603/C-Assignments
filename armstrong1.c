#include <stdio.h>
int main()
{
  int num1, num2, j, temp, num, rmd;// variable Declaration
  printf(" Enter the interval for Armstrong Numbers:\n ");
  scanf("%d %d", &num1, &num2); // getting the interval
  printf(" The Armstrong Numbers Between %d an %d are: ", num1, num2);
  for(j=num1+1; j<num2; ++j)
  {
      temp=j;
      num=0;
      while(temp!=0)// loop to check if the number is Armstrong number
      {
          rmd=(temp%10);
          num+=rmd*rmd*rmd;
          temp/=10;
      }
      if(j==num)
      {
          printf("%d ",j); // printing the Armstrong numbers
      }
  }
  return 0;
}
