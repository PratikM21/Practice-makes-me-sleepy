#include<stdio.h>
int main(){
	char c;
	printf("Enter any character:");
	scanf("%c",&c);
	
	if((c>=65 && c<=90)||(c>=97 && c<=122)){
		printf("The character is a alphabet");
	}
	else if(c>+48 && c<=57){
		printf("The character is a number");
	}
	else{
		printf("The character is a special symbol");
	}
	return 0;
}
