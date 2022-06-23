#include<stdio.h>
#include<stdlib.h>
int main(){
	int c,s,result;
	printf("Enter cost:");
	scanf("%d",&c);
	printf("\nEnter selling price:");
	scanf("%d",&s);
	
	
	result= s-c;
	result=abs (result);
	
	if(c<s){
		printf("You have profited:%d taka",result);
	}
	else if(c>s){
	
		
		printf("You have a loss of:%d taka",result);
	}
	else{
		printf("You don't have any profit or loss");
	}
	

	return 0;
}
