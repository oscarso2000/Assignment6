#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
typedef struct{
	char name[20];
	int accnum;
	int balance;
}bank;
int main(){
	char rsp = ' ';
	int x=3,d,w;
	char input[256];
	bank b[x];
	srand(time(NULL));
	strcpy(b[1].name,"John");
	strcpy(b[2].name,"Alexis");
	for (x=1;x<3;x++){
		b[x].accnum=rand()%20000+10000;
		b[x].balance=rand()%5000+1000;
	}
	do{
		for(x=1;x<3;x++){
			printf("Press %d:\nAccount Name: %s \nAccount Number: %d \nAccount Balance: %d\n", x, b[x].name, b[x].accnum, b[x].balance);
		}
		printf("Which account do you want to use: ");
		scanf("%d",&x);
		printf("Account %d chosen. \n",x);
		printf("Deposit or Withdraw? Please type in your option. \n");
		fgets(input,sizeof(input),stdin);
		fgets(input,sizeof(input),stdin);
		if((strcmp(input, "Deposit\n")==0)||(strcmp(input, "deposit\n"))==0){
			printf("How much money to deposit? \n$ ");
			scanf("%d",&d);
			b[x].balance+=d;
			printf("Done. \nAccount Name: %s \nAccount Number: %d \nAccount Balance: %d\n",b[x].name,b[x].accnum, b[x].balance); 
		}else if ((strcmp(input,"Withdraw\n")==0)||(strcmp(input, "withdraw\n")==0)){
			printf("How much money to withdraw? \n$ ");
			scanf("%d",&w);
			b[x].balance-=w;
			if (b[x].balance < 0){
				printf("Insufficient Balance. Sorry, you're broke. Bye. \n");
				break;
			}else{
				printf("Done. \nAccount Name: %sAccount Number: %d\nAccountBalance: %d\n",b[x].name,b[x].accnum,b[x].balance);
			}
		}else{
			printf("Invalid Response. Bye. \n");
			break;
		}
		printf("Do you want to continue operations? y/n \n");
		rsp=getchar();
		if (rsp=='\n'){
			rsp=getchar();
		}
	}while(rsp=='y' || rsp=='Y');
}
