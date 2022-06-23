#include<stdio.h>
int main(){
	int a,b,c,sum;
	printf("Enter three angles of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180){
		printf("The triangle can be formed");
	}
	else{
		printf("The triangle can't be formed'");
		
	}
	
	return 0;
}
