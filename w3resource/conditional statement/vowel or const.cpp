#include<stdio.h>
int main(){
	char c;
	printf("Enter the alphabet:");
	scanf("%c",&c);
	
	if((c==65 )||(c==69)||(c==73)||(c==79)||(c==85)||(c==97)||(c==101)||(c==105)||(c==111)||(c==117))
	{
		printf("The alphabet%c is a vowel  ",c);
	}
	else{
		printf("The alphabet is a constant");
	}
	return 0;
}
