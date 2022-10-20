#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
  int j,limit,count=0,i=0,head,tail;
  float y,answer,h=2.5;
  printf("**********************************************\n");
  printf("\tenter the limit amount :");
  scanf("%d",&limit);
  printf("**********************************************\n");
  printf("\n//#####-Random Numbers-#####// \n");
   while(i<=limit)        //drawing head in head tails either 3 6 or 9 times 
   {
    i++;
    head=0;
    tail=0;
    for(j=0;j<10;j++)
    {
      y=(float)((rand()% 65535)/65535.0f)*10;
      printf("\t%f\n",y);
      if (y<h)
       {
          head=head+1;
       }
      else
       {
          tail=tail+1;
       }
   }
   if ((head==3) || (head==6) || (head==9))
    {
     count=count+1;
    }
  }
  printf("**********************************************\n");
  answer=(float)count/limit;
  printf("the limit is= %d \n and the probability is = %f",limit,answer);
  printf("\n**********************************************");
  getch();
}
