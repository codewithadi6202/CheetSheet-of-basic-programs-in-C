#include<stdio.h>
#include<conio.h>
#include<Math.h>

int main(){
	float p,r,t,A,ci;
	printf("Enter Principal:");scanf("%f",&p); // taking input for principal
	printf("Enter Rate:");scanf("%f",&r); // taking input for Rate
	printf("Enter Time:");scanf("%f",&t); // taking input for Time
	A = p * pow(1 + (r/100),t); // Amount calculation
	ci = A - p; // CI calculation
	printf("The CI is %f",ci);// printing the ci
} 