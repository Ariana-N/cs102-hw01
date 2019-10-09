#include <stdio.h>

#include <stdlib.h>
int main(int argc, char* argv[])
{
	double a;
	double b;
	char operation;

operation = (argv[1][0]);
a =atof(argv[2]);
b =atof(argv[3]);

	//scanf("%c %lf %lf", &operation, &a, &b);

//ADDITION
	while(operation == '+')
		{
	printf("%f\n", a+b);
	break;
		}

//SUBTRACTION
	while(operation == '-')
		{
	printf("%f\n", a-b);
	break;
		}

//DIVISION
	while(operation == '/')
		{
	printf("%f\n", a / b);
	break;
		}

//MULTIPLICATION
	while(operation == 'x')
		{
	printf("%f\n", a*b);
	break;
		}

		return 0;
}