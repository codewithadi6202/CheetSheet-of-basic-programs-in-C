#include<stdio.h>
#include<conio.h>
#include<Math.h>

int main(){
	int n,temp,sum=0,i;
	printf("Enter the Number:");scanf("%d",&n);
	for(temp=n;temp!=0;){
		i=temp%10;
		sum = sum+pow(i,3);
		temp = temp/10;
	}
	if(n==sum && n!=0){
		printf("%d is an Armstrong Number.",n);
	}
	else{
		printf("%d is not an Armstrong Number.",n);
	}
}