#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i, j;      
void init_bingo (int a[5][5]);
void print_bingo (int a[5][5]);
void init_cnt (int a[5][5], int b[5][5]);

int main (void)
{
	int a[5][5]={0};
	int b[5][5]={0};
	init_bingo(a);
	print_bingo(a);
	init_cnt(a,b);
}

void init_bingo (int a[5][5])
{
	int n;
	int cnt = 1;
	srand((unsigned)time(NULL));
	
	while (cnt < 25)
	{
        int x =rand()%5;
        int y =rand()%5;
		n=1+(rand()%25);
		if (a[x][y] == 0) 
			a[x][y] = cnt++;
	}
}

void init_cnt (int a[5][5], int b[5][5])
{
	int ncnt;
	printf("1~25 중 수를 입력하시오 (중복x):\n ");
	scanf("%d", &ncnt);
	
	
}

void print_bingo (int a[5][5])
{
	for (i=0; i<5; i++){
		for (j=0; j<5; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
}