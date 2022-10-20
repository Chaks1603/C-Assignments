#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	long int decimalNumber,remainder,quotient,q1=1,q2=1,rem[50],length=0;;
	int binaryNumber[100],octalNumber[100],i=1,j;
	printf("Enter any decimal number: ");
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0)
	{   
	   if(q1>0)
	   {
		binaryNumber[i++]= quotient % 2;
		quotient = quotient / 2;
	   }
	   if(q2>0)
	   {
	   	octalNumber[i++]= quotient % 8;
		q2 = quotient / 8;
	   }
	}
	printf("\n Equivalent binary value of decimal number %d: ",decimalNumber);
	printf("\n Equivalent octal value of decimal number %d: ",decimalNumber);
	for(j = i -1 ;j> 0;j--)
		printf("%d",binaryNumber[j]);
		printf("%d",octalNumber[j]);
   			
	while(quotient!=0)
	{
		rem[i]=quotient%16;
		quotient=quotient/16;
		i++;
		length++;
	}
	printf("\n Hexadecimal number : ");
	for(i=length-1;i>=0;i--)
	{
		switch(rem[i])
		{
			case 10:
			printf("A");
			break;
			case 11:
			printf("B");
			break;
			case 12:
			printf("C");
			break;
			case 13:
			printf("D");
			break;
			case 14:
			printf("E");
			break;
			case 15:
			printf("F");
			break;
			default :
			printf("%ld",rem[i]);
		}
	}
	getch();
    return 0;
}
