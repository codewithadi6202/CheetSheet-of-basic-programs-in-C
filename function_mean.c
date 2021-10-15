#include<stdio.h>
#include<conio.h>

// This is contain maximum numbers of observation only

int mean(int num1,int num2,int num3,int num4,int num5){ // creating a function
	float mean = (num1+num2+num3+num4+num5)/5; // mean calculation
	printf("The mean is %f",mean); // printing value of mean
}

int main(){ // This is main() function
	mean(10,10,10,10,10); // calling the function with arguments.
}