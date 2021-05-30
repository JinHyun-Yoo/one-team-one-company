#include <stdio.h>
int main()
{
	int yy=0, mm=0, dd=0,i;
	printf("생년월일을 입력하세요(예시04 01 01) : "); 
	scanf("%d %d %d",&yy, &mm, &dd);
	while (true)
	{
		switch(mm)
		{
			case 2:
				if(yy%4==0)
				{
					i=29;
				}
				else 
				{
					i=28;
				}
			case 4:
			case 6:
			case 9:
			case 11:
				i=30;
			default:
				i=31;	
		}
		if ((yy>99 && mm>12)&&dd>i) 
		{
			printf("범위에 없는 생년월임입니다\n");
			printf("다시 입력해 주세요(예시04 01 01) : "); 
			scanf("%d %d %d",&yy, &mm, &dd);
		}
		else
		{
			break;
		}
	} 
		
}
