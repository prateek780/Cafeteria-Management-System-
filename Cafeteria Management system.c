#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
void admindata()
{
 system("cls");
 FILE *f1;
 f1=fopen("ADMIN DATA","r");
 int adde=getw(f1);
 printf("\n\n\nThe total sale of the day is:-%d",adde);
 getch();
fclose(f1);
}
void storage(int x)
{
FILE *f1;
f1=fopen("ADMIN DATA","w");
putw(x,f1);
fclose(f1);
}
void menu(){
    system("cls");
    char reorder;
    order:
    printf("\n \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  Menu  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\ \n    ");
    printf("\n ________________________________");
    printf("\n| FOOD ITEMS     PRICE(per plate)|");
    printf("\n| 1.TEA               15(per cup)|");
    printf("\n| 2.SAMOSA            40         |");
    printf("\n| 3.MOMO              100        |");
    printf("\n| 4.Chowmein(veg)     50         |");
    printf("\n| 5.Donuts            40         |");
    printf("\n|________________________________|");
    printf("\nWhat order you want to make?\n");
    int bill=0;
    int i;
    int o[5];
    int p[5]={15,40,100,50,40};
    char *s[]={"Tea","Samosas","Momo","Chowmein","Donuts"};
    char y;
printf("\nWhat do you like to order?( Enter quantity only:)");
printf("\nS.N \tItems\n");
 for(i=0;i<5;i++)
  {
  printf("\n %d  \t   %s   \t\t   :\t",i+1,s[i]);
  scanf("%d",&o[i]);
  }
printf("Your order will be avilable soon\n");
getch();
system("cls");
printf("_____________________________________________________");
printf("\n  S.N   ITEMS          Quantity*Rate           PRICE\t\t\t");
int sn=0;
for(i=0;i<5;i++)
{
    if(o[i]!=0)
    {
        sn++;
         printf("\n  %2d   %-15s    %d X %-14d    %-5d\n",sn,s[i],o[i],p[i],o[i]*p[i]);
    }
}
printf("______________________________________________________");
    for(i=0;i<5;i++)
    {
    bill=bill+o[i]*p[i];
    }
printf("\n Your  bill amount is: %d\n",bill);
getch();
choice:
printf("Do you want to order again?(Press Y for yes and N for no)\n");
scanf("%c",&reorder);
    if(reorder=='y' || reorder=='Y')
        {
            system("cls");
            goto order;
        }
    else if(reorder=='n' || reorder=='N')
        {
    system("cls");
    printf("\n\n\nThank you for using our service and please pay Rs.%d(including VAT.) for the coupen.",bill);
    static int xstatic;
    xstatic+=bill;
    storage(xstatic);
    getch();
        }
    else
        {
            system("cls");
            goto choice;
        }

}

void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="123456";
    char pass[10]="123456";
    do
{

    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  LOGIN FORM  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  ");
    printf(" \n\n                  ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n\n                  ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"123456")==0 && strcmp(pword,"123456")==0)
	{
	printf("  \n\n\n       WELCOME TO CAFETERIA ORDER SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\nPress any key to continue...");
	getch();
	admindata();
	printf("\n\n\nPlease email at pdl.pratiek100@gmial,.com or shivashrestha927@gmail.com for any difficulty.");
	getch();
	break;
	}
	else
	{
    printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
    a++;
    getch();
	}
    }
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong user name and password for four times!!!\n\n Please email at pdl.pratiek100@gmial,.com or shivashrestha927@gmail.com for any difficulty.");

		getch();

		}
		system("cls");

}
void main()
{
    char selection1;
    system("COLOR 4E");
    printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbWelcome to Cafeteria Management System\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    getch();
    int selection;
    selection:
    system("cls");
    printf("Are you \"Customer\" or \"Administrator\"\nPress \n1 for Customers \n2 for administrator\n");
    scanf("%d",&selection);
    if(selection==1){menu();
    goto selection;}
    else if(selection==2){login();
    printf("Do you want to close the console?(type y for yes and n for no):\n");
    scanf(" %c",&selection1);
    if(selection1=='Y'||selection1=='y'){goto exit;}
    else{goto selection;}
    }
    else{
    printf("Please enter valid number\n");
    getch();
    goto selection;
    }
    exit:
    getch();
}
