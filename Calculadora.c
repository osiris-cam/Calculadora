#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float  sum (float a, float b){
	return a+b;
}
float  rest (float a, float b){
	return a-b;
}

float multi (float a, float b){
	return a*b;
}

float divi (float a, float b){
	return a/b;
}

float square (float a, float b){
	return  pow(a, b);
}




int main (int argc, char**argv){

	char* opcion= argv[1];
	float a= atof(argv[2]);
	float b= atof (argv[3]);

	switch (*opcion){
	case '+': printf ("The sum is: %.1f\n", sum (a,b));	break;
	case '-': printf ("The substraction is: %.1f\n", rest (a,b));	break;
	case '*': printf ("The multiplication is: %1.f\n", multi (a,b)); break;
	case '/': printf ("The division  is: %.1f\n", divi (a,b));	break;
	case 'p': printf ("The square is: %.1f\n", square (a,b));	break;
	default: printf ("Your symbol is incorrect\n");	break;
	}
	return 0;
}
