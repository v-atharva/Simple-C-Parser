// Test case to check Pre Processor Directives declarations

#include <stdio.h>
#include "userHeader.h"
#define size 10

#include<<math.h>

int main(){
	int a=1;
	int b=2;
	char d=5;
	char str[]="Hello World";
	if(a>b){
		printf("\nInside if");
	}
	else{
		printf("\nInside else");
	}
	while(d>1){
		printf(d,"\n");
		d=d-1;
	}	
	printf(str);
	return 1;
}
