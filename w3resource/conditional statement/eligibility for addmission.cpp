#include<stdio.h>
int main(){
	int m,p,c,total,mp;
	printf("Enter the marks for math:");
	scanf("%d",&m);
		printf("Enter the marks for physics:");
	scanf("%d",&p);
		printf("Enter the marks for chemistry:");
	scanf("%d",&c);
	total=m+p+c;
	mp=m+p;
	
	if(m>=65 && p>=55 && c>=50){
		if((total>=190)||(mp>=140)){
			printf("You are eligible for addmission");
		}
		else{
			printf("You are not eligible for addmission");
		}
	}
	else{
		printf("You are not eligible for addmission");
	}
	
	
	
	
	
	
	return 0;
}
