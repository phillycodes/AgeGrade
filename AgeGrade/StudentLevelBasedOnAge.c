/*
 * File Name:		StudentLevelBasedOnAge.c
 * Names:			Philben Pierre
 * Course:			COP 2220C at Valencia College
 * Professor:		David Stendel
 * Description:		I will be testing different outputs with different format specifiers.
 * Date:			01/29/2021
 */

 // Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>

/*
 * Name:			main()
 * Parameters:		None.
 * Processes:		The main method will go through each line and excuted the code until the code returns 0. 
 * Return Value:	An integer representing an error code; if the program ends without error, zero
 *					will be returned to the calling program or operating system.
 */
int main() {
	// Variables
	int age = 19;
	double grade = 87.92;

	// Output
	printf("Philben Pierre\n");
	printf("4949 Silver Star Road, Orlando, FL 32818\n");
	printf("Age: %i\n", age);
	printf("Grade: %0.1f\n", grade);

	return 0;
}
