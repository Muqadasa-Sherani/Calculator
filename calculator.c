#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double num1, num2, result = 0;
	char Operator, choice;
	
	do{
		printf("Operators to be used are -, +, *, /, ^ \nEnter operation to calculate (ex: 12.5 + 2): ");
		scanf("%lf %c %lf", &num1, &Operator, &num2);
		switch(Operator){
			case '+':
				result = num1 + num2;
			break;
			case '-':
				result = num1 - num2;
			break;
			case '*':
				result = num1 * num2;
			break;
			case '/':
				result = num1 / num2;
			break;
			case '^':
				result = pow(num1, num2);
			break;		
			default:
				printf("\n Invalid Operator \n");	
		}
		
		printf("%.1lf %c %.1lf = %.1lf", num1, Operator, num2, result);	
		
		printf("\n\nTry again? (y/n): ");
		scanf(" %c", &choice);
		printf("\n\n");
	}while(choice == 'y' || choice == 'Y');
	
	
	return 0;
}
