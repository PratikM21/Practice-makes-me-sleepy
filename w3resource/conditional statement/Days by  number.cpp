#include<stdio.h>
int main()
{
	int days;
	printf("Imagine 1st day of the week is Friday. Now enter day number:");
	scanf("%d",&days);
	
	if(days==1){
		printf("Today is Friday");
	}
	else if(days==2){
		printf("Today is Saturday");
	}
	else if(days==3){
		printf("Today is Sunday");
	}
	else if(days==4){
		printf("Today is Monday");
	}
	else if(days==5){
		printf("Today is Tuesday");
	}
	else if(days==6){
		printf("Today is Wednesday");
	}
	else if(days==7){
		printf("Today is Thrusday");
	}
	else{
		printf("Press (1-7) to get the correct day");
	}
	
	
	
	return 0;
}
