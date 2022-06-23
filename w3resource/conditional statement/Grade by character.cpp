#include<stdio.h>
int main(){
	char c;
	printf("Enter Grade (E,V,G,A or F):");
	scanf("%c",&c);
	
	if(c==69){
		printf("Excellent");
	}
	else if(c==86){
		printf("Very good");
	}
	else if(c==71){
		printf("Good");
	}
    else if(c==65){
		printf("Average");
	}
    else if(c==70){
		printf("Fail");
	}
	
	
	return 0;
}
