#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	a=3,b=5,c=7;
	int x;
	scanf("%d",&x);
	int a0=x%a,b0=x%b,c0=x%c;
	if(a0==0){
		if(b0==0){
			
			if(c0==0)
				printf("Can be divisible by 3,5,7.");
			else printf("Can be divisible by 3,5.");
		}
		
		else{
		
			if(c0==0)
				printf("Can be divisible by 3,7.");
			else printf("Can be divisible by 3.");
		}
		
	}
		else {
				if(b0==0){
			       if(c0==0)
				   printf("Can be divisible by 5,7.");
			else printf("Can be divisible by 5.");
		}
		else {
			if(c0==0)
				printf("Can be divisible by 7.");
			else printf("Can not be divisible by 3,5,7.");
		}
	}
	return 0;
}
