#include <stdlib.h>
#include <stdio.h>

int function(int x){//new function
	if(x <= 0)
		return x;
	x = x-2;
	return function(x);
	
}

int main(){
	int a=30, i=0;
	
	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;	
}

