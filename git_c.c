#include <stdio.h>


int main(){



	int grade;
	printf("please enter a grade:");
	scanf("%d",&grade);

	if(grade<45){
		printf("you failed course\n");

	}
	else {
		printf("you pass the course\n");


	}
	if (90<grade){
		printf("A\n");
        printf("congratulations!!!");
	}
	else if (grade<75 && 65<grade) {
		printf("B");
		printf("Good Job");
	}
	else if (grade<65 && 45<grade){
		printf("C");
	}
	else if ( grade<45 && grade >35){
		printf("D");
	}
	else if (grade<35){
		printf("F");
	}


	return 0;
}
