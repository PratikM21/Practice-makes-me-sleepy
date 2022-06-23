#include<stdio.h>
int main(){
	
	int x,y;
	printf("Enter the value of(x,y):\n");
	scanf("%d%d",&x,&y);
	
	if(x>0 && y>0){
		printf("The point lies in first quadrant");
	}
	  else	if(x<0 && y>0){
		printf("The point lies in second quadrant");
	}
	  else	if(x<0 && y<0){
		printf("The point lies in third quadrant");
	}
	  else	if(x>0 && y<0){
		printf("The point lies in fourth quadrant");
	}
	
	
	
	
	return 0;
}
