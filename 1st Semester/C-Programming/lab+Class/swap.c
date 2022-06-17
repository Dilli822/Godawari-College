
// this program will allow to swap the numbers
// for eg: if num1 = 12
/**           num2 = 25
           then our result should be
               num1 = 25
               num2 = 12
**/
main(){
	int num1, num2, num3;
	num1 = 10;
	num2 = 12;
	printf("intial value of num1 is %d \n", num1);
	printf("intial value of num2 is %d \n", num2);
	num3 = num1;
	num1 = num2;
	num2 =  num3;
	printf("But Now number 1 is %d \n", num1);
	printf("But Now number 2 is %d", num3);
	
}
