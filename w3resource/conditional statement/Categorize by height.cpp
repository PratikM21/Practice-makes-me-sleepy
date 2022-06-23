#include<stdio.h>
int main(){
	
	int h;
	printf("Enter the persons height in centimeter:");
	scanf("%d",&h);

	
	if(h<=147){
		printf("e person is a dwarf");
	}
	else if(h>147 && h<=180){
		printf("The person is of normal height");
	}
	else{
		printf("The person is tall");
	}
	
	
	return 0;
}
