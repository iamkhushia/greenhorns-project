#include<stdio.h>

main()
{
	//convert temperature from degrees Celsius to Fahrenheit.
	
	float c,fh;
	
	printf("enter temperature in c=");
	scanf("%f",&c);
	
	fh=(c*9/5)+32;
	
	printf("temperature in Fahrenheit is=%f",fh);
}