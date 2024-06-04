


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int bill=0;
    int i;
    int o[5];
    int p[5]={15,20,100,50,20};
    char *s[]={"Tea","Samosas","Momo","Chowmein","Donuts"};
    char y;
printf("\n\n We have following items\n\n");
printf(" \t\n S.N ITEMS \t\t\t PRICE\n");
for(i=0;i<5;i++)
{
printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
}
printf("\nWhat do you like to order?( Enter quantity only:)");
printf("\nS.N \tItems\n");
 for(i=0;i<5;i++)
  {
  printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
  scanf("%d",&o[i]);
  }
printf("Your order will be avilable soon\n");
getch();
printf("______________________________________________");
printf("\n S.N ITEMS                                   PRICE\t\t\t");
for(i=0;i<5;i++)
{
    if(o[i]!=0)
    {
         printf("\n   %s    \t(%d X %d)\t\t    %d\n",s[i],o[i],p[i],o[i]*p[i]);
    }
}
printf("________________________________________________");
    for(i=0;i<5;i++)
    {
    bill=bill+o[i]*p[i];
    }
printf("\n Your  bill amount is: %d\n",bill);
printf("Thank you for using our service:");


return 0;

}
