#include <stdio.h>
#include <time.h>
#define x 10

struct std {
	int num;
	char name[20];
	int kor;
	int eng;
	int math;
	int sum;
	float avg;
};

int main (void)
{
	srand((unsigned)time(NULL));
	struct std list[x];
	int i, j; 
	
	for (i=0; i<10; i++){
		list[i].kor =rand() % 101;
		list[i].eng =rand() % 101;
		list[i].math =rand() % 101;
	}
	
	for (i=0; i<10; i++){
		list[i].sum = list[i].kor + list[i].eng + list[i].math;
		list[i].avg = list[i].sum / 3;
	}
	
	printf("번호	국어	영어	수학	총점	평균\n");
	
	for (i=0; i<10; i++)
		printf("%d	 %d	 %d	 %d 	%d	 %.1f\n", list[i].num, list[i].kor, list[i].eng, list[i].math, list[i].sum, list[i].avg);
}