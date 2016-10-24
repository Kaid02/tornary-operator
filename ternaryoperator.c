/*
Student Name : Kabir D Shrestha
Subject : Programming Fundamental
Lab No. : 07
Program : Write a program to take two input from user and print largest
		  and smallest numbers using ternary operator.
Date : 2016-10-25
*/
#include<stdio.h>
	int main(){
		int a,b,largest,smallest;
		
	printf("\nEnter the first number :\n");
	scanf("%d",&a);
	
	printf("\nEnter the second number :\n");
	scanf("%d",&b);
	
	
	
	(a>b)?printf("largest is%d and smallest is%d",a,b):printf("largest is %d and smallest is %d",b,a);
		
	
	return 0;
}
