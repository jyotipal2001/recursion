#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	float x,y;
	char ch;
	printf("enter initial amount\n");
	scanf("%f",&x);
	printf("enter\n c for credit \n d for debit\n b for balance\n");
	scanf("\n%c",&ch);
	switch(ch){
		case 'c':
			printf("enter credit amount\n");
			scanf("%f",&y);
			x=x+y;
			printf("new amount =%f",x);
			break;
			case 'd':
				printf("enter debit amount\n");
				scanf("\n%c",&y);
				if(x>=y){
					x=x-y;
					printf("new amount=%f",x);
				}
				else{
					printf("insufficient amount in your account");
				}
					break;
					case 'b':
						printf("amount in your account=%f",x);
						break;
						default:
							printf("choose correct option for your operation");
	}
}
