#include<stdio.h>
int main()
{
	int number,age;
	int sum=0,count=0;
	float avg=0;
	char name[10];
	while (true){
		printf("학번을 입력하세요 : ");
		scanf("%d" , &number);
		if(number==0){
			break;
		}
		else{
			printf("나이를 입력하세요 : ");
		scanf("%d", &age);
		printf("이름을 입력하세요 : ");
		scanf("%s",&name);
		count++;
		sum+=age;
		avg=(float)sum/count;
		}
		
		
	}
	printf("총인원 : %d\t평균나이 : %d",count,avg); 
	
}
