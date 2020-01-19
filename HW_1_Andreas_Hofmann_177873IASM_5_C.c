/*
* File: 			HW_1_Andreas_Hofmann_177873IASM_5
* Author: 			Andreas Simon Hofmann
* Date:				17.10.2017
* Update:			20.10.2017
* Update:			25.10.2017
* Update:			27.10.2017
* Update:			01.11.2017
* Update:			03.11.2017
* Update: 			07.11.2017
* Description: 		calculates the function y = tan (x), with x as a continous value and y
*/




#include <stdio.h>
#include <math.h>
#define Counter 15

int main (void)

//For this task we assume that the user inputs numbers 

{
	// declaration of the variables
	float numerator, denominator, fraction, YM, A, z, H;		
	int i;							// i is abbreviation for 'index', C for 'counter'
	
	numerator 	 = 2;
	denominator	 = 3;
	i 			 = 0;
	

			
	float Elementsx[Counter];
	float Elementsy[Counter];
	
	// Input by the user of the starting value 
	printf ("Input a starting Value: ");
	scanf("%f", &A);
	printf("The starting value is: %f\n\n",A);
	Elementsx[i] = A;


	// Input of the upper limit of the function
	printf("Input a function upper limit: ");
	scanf("%f", &YM);
	printf("The functions upper limit is: %f\n\n", YM);
	
	
	// Input by the user of the step value of the calculation of x
	printf ("Input a step value: ");
	scanf("%f", &H);
	printf("The functions step value is: %f\n\n", H);
	


	
	// calculaing the x value of the function
	// using auxiliary variables fraction, numerator, denominator. N is used as checking variable. i is used as index variable.
	while (i < Counter) 
	{
		fraction = numerator/denominator;
		Elementsx[i+1] = Elementsx[i] + (fraction*H);
	
		numerator++;
		denominator++;
		i++;
	}
	
	// calculating the y value of the function with y = tan(x)
	// i is used as index. z, numerator, denominator
	for (int i = 0; i < Counter; i++)  
	{
		z = Elementsx[i];
		numerator = (z * z - (6.0 * z) + 10.0);
		denominator = (z * z + (8.0 * z) - 20.0);
		
		Elementsy[i] = numerator/denominator;
	}
	
	
	// Printing of the table with the Number (continously), the x value and the corresponding function value y
	printf ("Number\t X Value\t Y Value\n\n");
	
	
	// i is used as index. YM is the upper limit the function can obtain.
	for (int i = 0; i < Counter; i++) 
	{
		printf("%d\t %f\t",i+1, Elementsx[i]);
		
		if (Elementsy[i]>YM)
			printf("exceeds upper Y limit\n");
		else
			printf ("%f\n", Elementsy[i]);
	}	
		
return 0;	

}
