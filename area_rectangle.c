#include<stdio.h>
#include<conio.h>

int main(){
	float length; // declaration of variable for length
	float breadth; // declaration of variable for breadth
	printf("Enter the length:"); scanf("%f",&length); // Taking input for length
	printf("Enter the breadth:"); scanf("%f",&breadth); // Taking input for breadth
	float area = length*breadth; // area calculation
	printf("Area of the Trianle is %f",area); // Printing of Area
}