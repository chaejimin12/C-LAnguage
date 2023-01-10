#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i, j;      
void init_ary(int a[10][10], int b[10][10]);
void set_data(int a[10][10]);

int main(void)
{
	int a[10][10]={0};
	int b[10][10]={0};
	init_ary(a, b);
	set_data(a);
	set_data(b);
}

void init_ary(int a[10][10], int b[10][10])
{
	int n, xn, yn;
    srand((unsigned)time(NULL));


    for (int i=0; i<100; i++)
    {
        int x =rand()%10;
        int y =rand()%10;
        xn = x;
        yn = y;
        printf("(x , y) = (%d, %d)\n ", xn, yn);
        n=rand()%100;
        printf("result = %d\n", n);

        a[xn][yn] = n;

        if (a[xn][yn] >= 1)
        {
            b[xn][yn] += 1;
        }
    }
}
	
void set_data(int a[10][10])
{
	for (i=0; i<10; i++){
		for (j=0; j<10; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
}