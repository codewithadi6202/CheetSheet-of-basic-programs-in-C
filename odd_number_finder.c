#include<stdio.h>
#include<conio.h>

int main(){
	int range,temp,mode; // Creating the variable needed
	printf("Enter your range:");scanf("%d",&range); // Taking input
	for(temp=1;temp<=range;temp++){ // iterating 
		mode = temp%2; // calcualting the remaider when divided by 2
		if(mode==0){ // checking the condtion that is mode = 0
			continue; // cotinue when mode is 0.
		}
		else{
			printf("%d\n",temp); // printing if mode is not 0.
		}
	}
} 