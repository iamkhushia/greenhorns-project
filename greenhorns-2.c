#include<stdio.h>
main()
{
	//find gross salary by adding % of HRA, DA, and TA of user choice.
	
	int hra,da,ta,bs,gs;
	
	printf("enter the value of hra=");
	scanf("%d",&hra);
	
	printf("enter the value of da=");
	scanf("%d",&da);
	
	printf("enter the value of ta=");
	scanf("%d",&ta);
	
	printf("enter the value of bs=");
	scanf("%d",&bs);
	
	hra = (bs*hra)/100;
	da = (bs*da)/100;
	ta = (bs*ta)/100;
	
	gs = bs + hra + da + ta;
	
	printf("gross salary by adding  of hra,da,ta,bs=%d",gs);
}