#include<stdio.h>
int main()
{
	int number,age;
	int sum=0,count=0;
	float avg=0;
	char name[10];
	while (true){
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d" , &number);
		if(number==0){
			break;
		}
		else{
			printf("���̸� �Է��ϼ��� : ");
		scanf("%d", &age);
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s",&name);
		count++;
		sum+=age;
		avg=(float)sum/count;
		}
		
		
	}
	printf("���ο� : %d\t��ճ��� : %d",count,avg); 
	
}
