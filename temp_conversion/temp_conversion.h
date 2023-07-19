#include <stdio.h>

void userPrompt(void)
{
	printf("Please select the options:\n");
	printf("1. Celsius to Kelvin.\n");
	printf("2. Kelvin to Celsius.\n");
	printf("3. Fahrenheit to Celsius.\n");
	printf("4. Celsius to Fahrenheit.\n");
	printf("5. Fahrenheit to Kelvin.\n");
	printf("6. Kelvin to Fahrenheit.\n");
}

void tempConversion(void)
{
	float userInput;
	float convertedTemp = 0;
	int userChoice;
	userPrompt();

	scanf_s("%d", &userChoice);
	if (userChoice == 1)
	{
		printf("Please enter the temperature in Celsius: ");
		scanf_s("%f", &userInput);
		convertedTemp = userInput + 273.15f;
		printf("Celsius to Fahrenheit: %.2f", convertedTemp);
	}

	if (userChoice == 2)
	{
		printf("Please enter the temperature in Kelvin: ");
		scanf_s("%f", &userInput);
		convertedTemp = userInput - 273.15f;
		printf("Kelvin to Celsius: %.2f", convertedTemp);
	}

	if (userChoice == 3)
	{
		printf("Please enter the temperature in Fahrenheit: ");
		scanf_s("%f", &userInput);
		convertedTemp = (userInput - 32) * 5 / 9;
		printf("Fahrenheit to Celsius: %.2f", convertedTemp);
	}

	if (userChoice == 4)
	{
		printf("Please enter the temperature in Celsius: ");
		scanf_s("%f", &userInput);
		convertedTemp = userInput * 9 / 5 + 32;
		printf("Celsius to Fahrenheit: %.2f", convertedTemp);
	}

	if (userChoice == 5)
	{
		printf("Please enter the temperature in Fahrenheit: ");
		scanf_s("%f", &userInput);
		convertedTemp = (userInput - 32) * 5 / 9 + 273.15;
		printf("Fahrenheit to Kelvin: %.2f", convertedTemp);
	}

	if (userChoice == 6)
	{
		printf("Please enter the temperature in Kelvin: ");
		scanf_s("%f", &userInput);
		convertedTemp = (userInput - 273.15) * 9 / 5 + 32;
		printf("Kelvin to Fahrenheit: %.2f", convertedTemp);

	}



}
