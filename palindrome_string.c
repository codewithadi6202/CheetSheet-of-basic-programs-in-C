#include<stdio.h>
#include<conio.h>
#include<String.h>

int main(){
	char str1[45]; 
	char str2[45]; // Creating Two Strings
	int cmp; // Creating a int variable to store the ascii values
	gets(str1); // Taking Input from the user
	strcpy(str2,str1); // Copying the string to str2 <-- str1
	strrev(str1); // Reversing the string of str1
	cmp = strcmp(str1,str2); // Comparing both the Strings the collecting the ascii value in an int
	if(cmp ==0){ // checking the cmp value if 0 
		printf("It is a Palindrome"); // printing the result
	}
	else{
		printf("It is not a palindrome");
	}
}
