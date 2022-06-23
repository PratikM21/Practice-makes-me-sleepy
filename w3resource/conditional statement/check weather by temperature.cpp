#include<stdio.h>
int main(){
	int tem;
	printf("Enter the temperature:");
	scanf("%d",&tem);
	
	if(tem<0){
		printf("It's freezing weather");
	}
	
	else if(tem>=0 && tem<10){
	       printf("It's very cold weather");
	        }
	    else if(tem>=10 && tem<20){
	       printf("It's cold weathe'");
	        }
             else if(tem>=20 && tem<30){
	       printf("It's normal weather");
	        }
           	else if(tem>=30 && tem<40){
	       printf("It's hot weather");
	        }
	    
	        else{
	        	printf("It's very hot weather");
			}
	
	
	
	return 0;
}
