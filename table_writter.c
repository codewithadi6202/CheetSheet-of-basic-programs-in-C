#include<stdio.h>
#include<conio.h>

int main(){
	int tableno; // This is the table number that user will give input
	int no; // This is the number that will be iterated
	printf("Enter your Number:"); // printing for user information
	scanf("%d",&tableno); // taking input from user of tableno.
	for(no=1;no<=10;no++){
		int result = tableno * no; // Mulitplicatin results will Assigned in this variable
		printf("%d x %d = %d\n",tableno, no, result); // Printing the results;
	}
}