#include<stdio.h>
#include<conio.h>
void main()
{
   int a[100],i,j,n,t;
   printf(" enter limit in array : ");
   scanf("%d",&n);
   printf(" Enter %d value \n",n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf(" Original List :\n");
   for(i=0;i<n;i++)
   printf("%5d",a[i]);
 
  /* bubble sort logic */
    for(i=1;i<n;i++)
    for(j=0;j<n-i;j++)
    if(a[j]>=a[j+1])
    {
     t=a[j];
     a[j]=a[j+1];
     a[j+1]=t;
    }
   printf("\n\n Sorted list :\n");
   for(i=0;i<n;i++)
   printf("%5d",a[i]);
   getch();
}
