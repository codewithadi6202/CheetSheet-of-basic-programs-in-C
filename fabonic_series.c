#include<stdio.h>
#include<conio.h>

int main(){
	int a = 0,b = 1, range,d,e; // Creating all variable  needed
	printf("Enter the range:");scanf("%d",&range); // taking input 
	printf("\n%d\n%d\n",a,b); // printing the default value of a and b
	for(d=2;d<=range;++d){
		e = a+b;   // iterating the values using for loop
		a = b;
		b = e;
		printf("%d\n",e); // printing the number.
	}
}