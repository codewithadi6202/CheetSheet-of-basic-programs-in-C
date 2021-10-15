#include<stdio.h>
#include<conio.h>

int main(){
	float si,p,r,t; // Creating all the variable needed 
	printf("Enter Principal:");scanf("%f",&p); // taking input for principal
	printf("Enter Rate:");scanf("%f",&r); // taking input for Rate
	printf("Enter Time:");scanf("%f",&t); // taking input for Time
	si = (p*r*t)/100; // SI calculation
	printf("The SI is : %f",si); // printing the si
} 