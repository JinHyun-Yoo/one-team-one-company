#include<stdio.h>
int main()
{
	char name[10];
	int age;
	
	printf("당신의 이름을 입력하세요: ");
	scanf("%s",&name);
	
	printf("당신의 나이를 입력하세요: ");
	scanf("%d", &age);
	
	
	
	printf("반갑습니다. %s님!\n우와 당신은 %d살이군요!",name, age); 
}
