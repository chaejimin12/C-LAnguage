#include <stdio.h>
int id();
int pass();
int count2;
void main()
{
int count=id();
	if (count==1)
		count2=pass();
	if (count2==1) printf("성공");
	
		
	
}

int check(int n){
	static int count = 1;
	
	if(n==1234){
		return 1;
		}
	else{
		if(count>=5){
			return 2;
		}
		++count;
		return 0;
	}
}

int id()
{
	int result=0;
	int n=0;
	int i;
	
	for (i=0; i<5; i++){
		printf("아이디를 입력하시오: ",n);
	scanf("%d", &n);
	result=check(n);
	
	if(result==0)
	{
		printf("아이디가 틀렸습니다\n");
	}
	else if (result==1)
	{
		printf("아이디가 맞았습니다\n");
		return 1;
	}
	else if(result==2){
		printf("아이디를 5회 이상 틀렸습니다\n");
		return 0;
	}
	}
	
}
int pass()
	{
	int result=0;
	int n=0;
	int i;
	
	for (i=0; i<5; i++){
		printf("비밀 번호를 입력하시오: ",n);
	scanf("%d", &n);
	result=check(n);
	
	if(result==0)
	{
		printf("비밀 번호가 틀렸습니다\n");
	}
	else if (result==1)
	{
		printf("비밀 번호가 맞았습니다\n");
		return 1;
	}
	else if(result==2){
		printf("비밀 번호를 5회 이상 틀렸습니다\n");
	return 0;
	}
	}
}