#include<stdio.h>
main(){
	int a, mul;
	printf("Enter the Total Electricity Unit: ");
	scanf("%d", &a);
	double extraCharge = 0.2;
	double finalCharge;
	
	if (a < 50){
		mul = a * 0.50;
		finalCharge = mul + extraCharge * a;
		// .2f without rounding
		printf("Total Cost of electrcity for given unit is Rs.%.2f ", finalCharge);
	}
	
	else if(a >= 50){
		mul = a * 0.75;
		finalCharge = mul + extraCharge * a;
		printf("Total Cost of electrcity for given unit is Rs.%.2f ", finalCharge);
	}
	
	else if(a >= 100){
		mul = a * 0.75;
		finalCharge = mul + extraCharge * a;
		printf("Total Cost of electrcity for given unit is Rs.%.2f", finalCharge);
	}
	else if(a >= 200){
		mul = a * 1.20;
		finalCharge = mul + extraCharge * a;
		printf("Total Cost of electrcity for given unit is Rs.%.2f", finalCharge);
	}
	else if (a >= 250){
		mul = a * 1.50;
		finalCharge = mul + extraCharge * a;
		printf("Total Cost of electrcity for given unit is Rs.%.2f", finalCharge);
	}
}
