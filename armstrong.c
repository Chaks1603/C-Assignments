#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j, number, sum = 0, temp, remainder;
	printf("Enter an integer : ");
	scanf("%d",&number);
	temp = number;
	printf("\n");
	for(int i=1;i<2;i++)
	 for(int j=0;j<3;j++)
	  printf("....Checking....... ");
	while( temp != 0 )
	{
		remainder = temp%10;
		sum = sum + remainder*remainder*remainder;
		temp = temp/10;
	}
	if ( number == sum )
		printf("Entered number is an armstrong number.\n");
	else
		printf("Entered number is not an armstrong number.\n");
	return 0;
}
