#include<stdio.h>

main()
{
	//find the third angle of a right triangle if two other angles are given.
	
	int a,b,c;
	
	printf("enter a angle of triangle=");
	scanf("%d",&a);
	
	printf("enter b angle of triangle=");
	scanf("%d",&b);
	
	c = 180 - (a+b);
	
	printf("third angle of the triangle=%d",c);
}