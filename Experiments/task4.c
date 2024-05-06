#include "stdio.h"
/*
 * Task
 * Implement Functions add and div
 * Function Add does an addition of two integers
 * Function Div does division of two integers and returns 
 * a)a structure containing result, remainder and error code set to 0 if everything was OK, 1 if the second argument was zero
 * b)returns an error code as in a) and  has 2 extra arguments (both pointers) which are used to return result and remainder
 * The main fnction reads a single symbol and stores it in a variable "c" and two integers "a" and "b"
 * If the "c" contains character '+' call the function add with "a" and "b", if "c" contains '/' call div with "a" and "b". Otherwise print some error message and exit the program.
 */

// <datovy typ> <nazev funkce> (argumenty)
/*
 * Add nebude vracet nic, pomoci ukazatele se upravi hodnota v pameti
 * Div bude vracet strukturu
 * struktura bude obsahovat vysledky po deleni, modulu a error
 * error bude 0 kdyz deleni bylo uspesne, jinak 1.
*/


struct hodnoty{

	int result;
	int remainder;
	int error_code;

};


void add(int a, int b, struct hodnoty *hodnota){

	hodnota -> result = a + b;
	hodnota -> error_code = 0; 

}

void div(int a, int b, struct hodnoty *hodnota){

	if(b == 0){

		printf("You can't divide by 0 fool!\n");
		hodnota -> error_code = 1;	

	}

	else{

		hodnota -> result = a / b;
		hodnota -> remainder = a % b;
		hodnota -> error_code = 0;
	
	}

}

int main (int argc, char** argv)
{
	int a,b;
	char c;
	scanf(" %c",&c);
	scanf("%d",&a);
	scanf("%d",&b);
	struct hodnoty hodnota;
    hodnota.remainder = 0;

	printf("Stored values are: c:%c, a:%d, b:%d\n",c,a,b);

	if(c == '/'){

		div(a, b, &hodnota);

	}

	else if(c == '+'){

		add(a, b, &hodnota);	

	}

	else{

		printf("Uknown operator!\n");

	}

	printf("Result: %d\nRemainder: %d\n", hodnota.result, hodnota.remainder);

	return hodnota.error_code;

}

