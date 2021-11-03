#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void load(char* name, char* department, float* cyi)
{
	printf("\nPlease enter the name of employee \n\n");
	gets_s(name, 20);

	printf("\n\nPlease enter employee's department \n\n");
	gets_s(department, 20);

	printf("\n\nPlease enter the employee's current yearly income \n\n");
	scanf("%f", &*cyi);

	getchar();
}

void calc(float cyi, float raise, float* raiseAmt, float* newPay, float* totalCyi, float* totalRaiseAmt, float* totalNewpay)
{
	if (cyi <= 70000)
	{
		raise = 8.6;
	}
	else if (70000.01 < cyi && cyi < 80000)
	{
		raise = 7.4;
	}
	else if (80000.01 < cyi && cyi < 90000)
	{
		raise = 5.8;
	}
	else if (cyi >= 90000.01)
	{
		raise = 4.9;
	}

	*raiseAmt = (cyi * raise) / 100;
	*newPay = cyi + *raiseAmt;
	*totalCyi = *totalCyi + cyi;
	*totalRaiseAmt = *totalRaiseAmt + *raiseAmt;
	*totalNewpay = *totalNewpay + *newPay;

}

void print(char* name, char* department, float raiseAmt, float newPay)
{
	printf("\n\nThe raiseAmt for %s at %s is %f and the newPay is %0.2f.\n\n", name, department, raiseAmt, newPay);
}

void finalprint(float totalCyi, float totalRaiseAmt, float totalNewpay)
{
	printf("\n\nThe totalCyi is %f, the totalRaiseAmt is %f and totalNewpay is %0.2f.\n\n", totalCyi, totalRaiseAmt, totalNewpay);
}

void main()
{
	char name[20];
	char department[20];
	float cyi, raise = 0, raiseAmt, newPay, totalCyi = 0, totalRaiseAmt = 0, totalNewpay = 0;

	//Employee 1
	load(name, department, &cyi);
	calc(cyi, raise, &raiseAmt, &newPay, &totalCyi, &totalRaiseAmt, &totalNewpay);
	print(name, department, raiseAmt, newPay);

	//Employee 2
	load(name, department, &cyi);
	calc(cyi, raise, &raiseAmt, &newPay, &totalCyi, &totalRaiseAmt, &totalNewpay);
	print(name, department, raiseAmt, newPay);

	//Employee 3
	load(name, department, &cyi);
	calc(cyi, raise, &raiseAmt, &newPay, &totalCyi, &totalRaiseAmt, &totalNewpay);
	print(name, department, raiseAmt, newPay);

	//Employee 4
	load(name, department, &cyi);
	calc(cyi, raise, &raiseAmt, &newPay, &totalCyi, &totalRaiseAmt, &totalNewpay);
	print(name, department, raiseAmt, newPay);

	//Employee 5
	load(name, department, &cyi);
	calc(cyi, raise, &raiseAmt, &newPay, &totalCyi, &totalRaiseAmt, &totalNewpay);
	print(name, department, raiseAmt, newPay);

	//Print out the every total things here
	finalprint(totalCyi, totalRaiseAmt, totalNewpay);

	system("PAUSE");
}