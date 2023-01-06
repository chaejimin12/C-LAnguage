#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define std 10
#define score 6

int main (void){
	int i, j, t, kor, eng, math, sum, avg, rank;
	int a[std][score]={0};
	int t_score[std][score]={0};
	
	srand((unsigned)time(NULL));
	
	for (i=0; i<std; i++)
		for (j=0; j<score-3; j++)
			a[i][j] =rand()%101;
			
	printf("번호  kor  eng  math  sum  avg  rank\n");
	
	for (i=0; i<std; i++){
		for (j=0; j<3; j++)
			a[i][3]+=a[i][j];
		a[i][4]=a[i][3]/3;
	}
	
	for (i = 0; i < std; i++)
	{
		t_score[i] = score[i][4];
	}
	t_score[i] = score[i][4];
	for (i = 0; i < std; i++)
	{
		for (j = i; j < std; j++)
		{
			if (t_score[i] < t_score[j])
			{
				t = t_score[i];
				t_score[i] = t_score[j];
				t_score[j] = t;
			}
		}
	}

	for (i = 0; i < std; i++)
	{
		for (j = 0; j < score; j++)
		{
			if (t_score[i] == score[j][4])
				score[j][5] = i+1;
		}
	}
	
	for (i=0; i<std; i++)
	{
		for
			(j=0; j<score; j++)
			printf("%i %d %d %d",std, a[i][j], a[i][3], a[i][4]);
	}
	
	return 0;
}