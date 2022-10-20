#include<stdio.h>
int main()
{
	int a[2500], n, i, t, j, max=0,c=0, mode=0;
	float s=0, mean, median, moment; double sum=0 ;
	printf("Enter how many data you want to input: \n");
	scanf("%d",&n);
             printf("Enter %d Data:\n", n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
  	}
// to find mean
	mean = s/(float)n;
	printf("mean or average is:  %.1f\n",mean);
//to find median
	if(n%2==0)
		median=( (a[(n-1)/2] + a[(n-1)/2+1] ) / 2.0);
	else
		median=( (a[(n-1)/2]) / 2.0);
	printf("median is: %.1f\n", median);
//to find mode
	for(i=0; i<n; i++)
	{
		t=a[i];
		c=0;
		for(j=0; j<n; j++) 
		{
			if(t==a[j]) 
			c++;
			if(c>max)
			{
				max=c;
				mode=t;
			}
		}
	}
	printf("mode is : %.d\n",mode);
//to find central moment
     for(i=0; i<n; i++)
	{
        sum+= pow((a[i]-mean),2);
	}
		moment=sum/(float)n;
	printf("central moment : %.1f\n",moment);
	return 0;
}

