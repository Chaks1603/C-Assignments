#include<stdio.h>
//function to find prime palindrome
main()
{
	int c,rev=0,tmp,i,num,m,n;
	//taking the input
	printf("Enter the lower limit: ");
	scanf("%d",&m);
	printf("Enter the upper limit: ");
	scanf("%d",&n);
	printf("The prime palindrome numbers are: ");
	for(num=m;num<=n;num++)
	{
		tmp=num;
		c=0;
		rev=0;
		//checking for prime number
		for(i=1;i<=tmp;i++)
		{
			//counting the number of factors of the number
			if(tmp%i==0)
				c++;
		}
		//if the number is prime check for palindrome
		if(c==2)
		{
			//reversing the number
			while(tmp!=0)
			{
				rev=rev*10;
				rev=rev+tmp%10;
				tmp=tmp/10;
			}
		//checking for prime palindrome number
		if(rev==num)
			printf("%d ",num);
		}
	}
}
