#include<stdio.h>
int main(){
	
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18){
		printf("You are aligible for vote");
	}
	else{
		printf("You are not aligible for vote");
	}
	
	
	
	return 0;
}
