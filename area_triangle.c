#include<stdio.h>
#include<conio.h>

int main(){
	float base; // declaration of variable for base
	float height; // declaration of variable for height
	printf("Enter the base:"); scanf("%f",&base); // Taking input for base
	printf("Enter the height:"); scanf("%f",&height); // Taking input for height
	float area = (base*height)/2; // area calculation
	printf("Area of the Trianle is %f",area); // Printing of Area
}