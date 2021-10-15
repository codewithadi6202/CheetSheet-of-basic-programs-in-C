#include<stdio.h>
#include<conio.h>
#include<Math.h>

int main(){
	float const pi = 3.14; // assinging a const value of pi
	float radius,area; // creating two variable of radius and area
	printf("Enter the Radius:"); 
	scanf("%f",&radius); // Taking input for radius
	area = pi* pow(radius,2); // calculation of area
	printf("The Area of the circle is: %f",area); // printing the area
}