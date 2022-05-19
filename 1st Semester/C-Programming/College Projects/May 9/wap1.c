
#include<stdio.h>

main() {
	int physics, maths, bio, computer, chemistry, sum, total = 500;
	float percent, finalPercent;
	
	printf("Students Marksheet \n");
	printf("physics:");
	scanf("%d", &physics);
	printf("Maths:");
	scanf("%d", &maths);
	printf("Biology:");
	scanf("%d", &bio);	
	printf("Chemistry:");
	scanf("%d", &chemistry);
	printf("Computer: ");
	scanf("%d", &computer);

	sum = physics + maths + bio + computer + chemistry;
	printf("Out of 500 \n");
	printf("Total Marks obtained: %d \n", sum);
	finalPercent = (float)sum/total * 100;
	printf("Percentage: %f \n", finalPercent);
	
	char gradeA[] = "Grade A";
	char gradeB[] = "Grade B";
	char gradeC[] = "Grade C";
	char gradeD[] = "Grade D";
	char gradeE[] = "Grade E";
	char gradeF[] = "Grade F";
	
	if( finalPercent >=90){
		printf("Student has scored-%s", gradeA);
	}
	else if (finalPercent >= 80){
		printf("Student has scored-%s", gradeB);
	}
	else if (finalPercent >= 70){
		printf("Student has scored-%s", gradeC);
	}
	else if (finalPercent >= 60){
		printf("Student has scored-%s", gradeD);
	}
	else if (finalPercent >= 40){
		printf("Student has scored-%s", gradeE);
	}
	else if(finalPercent < 40 ){
		printf("Unfortunately Studentis failed- %s", gradeF);
	}
	

}


