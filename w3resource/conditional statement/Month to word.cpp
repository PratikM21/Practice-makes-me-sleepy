#include<stdio.h>
int main(){
	
	int m;
	printf("Enter any month's number:");
	scanf("%d",&m);
	
	if (m==1){
		printf("The month is january");
	}
	else if(m==2){
		printf("The month is February");
	}
	else if(m==3){
		printf("The month is March");
	}
	else if(m==4){
		printf("The month is April");
	}
	else if(m==5){
		printf("The month is May");
	}
	else if(m==6){
		printf("The month is June");
	}
	else if(m==7){
		printf("The month is July");
	}
	else if(m==8){
		printf("The month is August");
	}
	else if(m==9){
		printf("The month is September");
	}
	else if(m==10){
		printf("The month is October");
	}
	else if(m==11){
		printf("The month is November");
	}
	else if(m==12){
		printf("The month is December");
	}
	else{
		printf("Enter the month number within (1-12)");
	}
	return 0;
}
