/*
By Ira Garrett
OS: Ubuntu
Compiler flags:
		-1: negative number from user input
Description:
		Given an integer provided by the user, the function sumDigits will add each of the numbers in the provided integer.
*/

//libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//variables
int digits;
int exponented = 1;


//sumDigits vunction
int sumDigits(int n){
	if(n <0) return -1;
	
	//code to determine the order of the function (relavent in an early iteration of this program)
	int order = 0;
	while((exponented)<n){
		printf("order: %d\t\n",order);
		
		for(int i =0; i < order; i++){
			exponented *=10; 
		}
		order++;
		
	}
	order--;
	printf("the order (base 10) of %d, is %d\n",n,order);


	//determine the indivudual terms
	
	int exp = 0;
	int t = n;	//copies the integer n into t
	int summ = 0;
	//while loop goes through the terms (the order) and adds them up
	while(t!= 0){

		exp = t%10;
		summ += exp;
		t /= 10;
	}

	
	
	return summ;
}


//main function
int main(int argc, char *argv[]){
	
	//if a number is provided in the execution, use it, otherwise, ask the user for one
	if(argc == 1){
		printf("You didn't include a number when executing this program, \nPlease enter a number.\n");
		scanf("%d",&digits); 	
	}
	else if(argc >= 2){
		//convert the *char (string) from the terminal execution to integer 
		digits = atoi(argv[1]);
	}

	//define this integer to be the value returned by the function
	int result = sumDigits(digits);
	
	//tell the user that the provided data was negative (from the -1 integer return)
	if(result == -1){
		printf("the number you provided was a negative number.\n");
		return 0;
	}
	else{
		printf("the sum of the terms in the number provided is: %d\n",result);
	}
	
}
