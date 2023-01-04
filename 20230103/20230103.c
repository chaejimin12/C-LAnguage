#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int a_money = 1000;       
    int b_money = 1000;
    int c_money = 1000;
    int a;        
    int b;
    int c;
    int A;                
    int B;
    int C;
	int aa = 0;       
    int bb = 0;
    int cc = 0;
   
	for(int i=1; i<=10; i++)
    {
    int num = 1 + (rand()%6);
    srand((unsigned)time(NULL));
     
    printf("A-주사위 숫자를 선택하시오: \n");    
    scanf("%d",&A);
    printf("A-배팅 금액을 입력하시오: (보유금액: %d): \n",a_money);
    scanf("%d",&a);
   
    printf("B-주사위 숫자를 선택하시오: \n");    
    scanf("%d",&B);
    printf("B-배팅 금액을 입력하시오: (보유금액: %d) \n",b_money);
    scanf("%d",&b);
    
    printf("C-주사위 숫자를 선택하시오: \n");    
    scanf("%d",&C);
    printf("C-배팅 금액을 입력하시오: (보유금액: %d) \n",c_money);
    scanf("%d",&c);        
          
    printf("게임을 시작합니다. \n");
    {
        if(num == A){
            aa++;
            a_money += a*2;
            printf("win, %d \n",a_money);
        }
        else
        {
            a_money = a_money-a;
            printf("lose, %d \n",a_money);     
        }
        if(num == B){
            bb++;
            b_money += b*2;
            printf("win, %d \n",b_money);  
        }
        else
        {
            b_money = b_money - b;
            printf("lose, %d \n",b_money);
        }
        if(num == C){
            cc++;
            c_money += c*2;
            printf("win, %d \n",c_money);
        }
        else
        {
            c_money = c_money - c;
            printf("lose, %d \n",c_money);
        }
        printf("나온 주사위: %d \n",num);
    }

}
	printf("최종 결과\n");
    printf("A의 이긴 횟수, 보유 금액: %d, %d\n", aa, a_money);
    printf("B의 이긴 횟수, 보유 금액: %d, %d\n", bb, b_money);
    printf("C의 이긴 횟수, 보유 금액: %d, %d\n", cc, c_money);  
} 
    