#include<stdio.h>
int main(){
	int m;
	printf("Enter any month's number:");
	scanf("%d",&m);
	 if (m==1){
		printf("The month is january and it has 31 days");
	}
	else if(m==2){
		printf("The month is February and it usually has 28 unless it's a leap year when there's 29 days");
	}
	else if(m==3){
		printf("The month is March and it has 31 days");
	}
	else if(m==4){
		printf("The month is April and it has 30 days");
	}
	else if(m==5){
		printf("The month is May and it has 31 days");
	}
	else if(m==6){
		printf("The month is June and it has 30 days");
	}
	else if(m==7){
		printf("The month is July and it has 31 days");
	}
	else if(m==8){
		printf("The month is August and it has 31 days");
	}
	else if(m==9){
		printf("The month is September and it has 30 days");
	}
	else if(m==10){
		printf("The month is October and it has 31 days");
	}
	else if(m==11){
		printf("The month is November and it has 30 days");
	}
	else if(m==12){
		printf("The month is December and it has 31 day");
	}
	else{
		printf("Enter the month number within (1-12)");
	}
	
	return 0;
}
