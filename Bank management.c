#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int list();
void diposite();
void withdrow();
void transfer();
void checkDetails();
void AllDeatils();
int TotalAmount=1000,Amount,Amo,Tr,TotalDiposite=0,TotalWith=0,TotalTr=0;
int Account;
char a[50];
void main()
{	
	system("cls");
	printf("Enter your Name:");
	gets(a);
	printf("Enter your Account Number:");
	scanf("%d",&Account);	
	while(1)
	{
		system("cls");
		switch(list())
		{
			case 1:
				diposite();
				TotalDiposite+=Amount;
				printf("--Diposite Susccfull--");
				break;
			case 2:
				withdrow();
				if(Amo<=TotalAmount)
				TotalWith+=Amo;
				printf("--Withdrow Susccfull--");
				break;
			case 3:
				transfer();
				if(Tr<=TotalAmount)
				TotalTr+=Tr;
				printf("--Transfer Susccfull--");
				break;
			case 4:
				checkDetails();
				printf("--All Details--");
				break;
			case 5:
				system("cls");
				AllDeatils();
				getch();	
				exit(0);
			default:
				printf("\n Invalid choice");
		}
		getch();
	}

}
int list()
{
	int ch;
	printf("\n1 Diposite Amount: ");
	printf("\n2 Withdrow Amount: ");
	printf("\n3 Transfer Amount: ");
	printf("\n4 check Detail: ");
	printf("\n5 Exit ");
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	return(ch);
}
void diposite()
{
	printf("\n Enter the Amount you want to diposite: ");
	scanf("%d",&Amount);
	TotalAmount+=Amount;
}
void withdrow()
{
	printf("\n Enter the amount you wish to withdraw: ");
	scanf("%d",&Amo);
	if(Amo<=TotalAmount)
	{
		TotalAmount-=Amo;
	}
	else
	{
		printf("\n Insufficient Balance");
	}
}
void transfer()
{
	printf("\n Enter the amount you want to transfer: ");
	scanf("%d",&Tr);
	if(Tr<=TotalAmount)
	{
		TotalAmount-=Tr;
	}
	else
	{
		printf("\n Insufficient Balance is not Tranfer");
	}
}
void checkDetails()
{
	printf("\n Total Amount = %d", TotalAmount);
	printf("\n Total Diposited Amount  = %d", TotalDiposite);
	printf("\n Total withdrow Amount = %d", TotalWith);
	printf("\n Total Tranfer Amount = %d",TotalTr);
}
void AllDeatils()
{
	printf("\n ****************************************************************\n");
	printf("\n Your Name = %s",a);
	printf("\n Your Account Number = %d",Account);
	printf("\n Total Amount = %d", TotalAmount);
	printf("\n Total Diposited Amount  = %d", TotalDiposite);
	printf("\n Total withdrow Amount = %d", TotalWith);
	printf("\n Total Tranfer Amount = %d",TotalTr);
	printf("\n ******************************THANKS*****************************");
}

	

