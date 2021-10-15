#include<stdio.h>
#include<conio.h>

int main(){
	int year; // creating a variabel to store the year
	printf("Enter Year:");scanf("%d",&year); // taking input from the user in year
	int temp = year%4; // calculating the mode of year and 4
	if(temp==0){ // checking temp weather it is 0 or not
		printf("This is a Leap Year"); // printing the result
	}
	else{
		printf("This is not a leap year");
	}
}