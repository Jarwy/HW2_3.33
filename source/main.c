#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int x = 0, y = 0;
	int v, h;

	printf("Length:");
	scanf_s("%d", &v);
	printf("Breadth:");
	scanf_s("%d", &h);
	

	
	for (x = 0; x < h; x++)
	{
		printf("+");
	}							  //第一行

	printf("\n");

	while (y <v-2)
	{
		printf("+");			  //左
		for (x = 0; x <h-2; x++)  //中間空格:空格數=(寬度-2)
		{
			printf(" ");
		}
		printf("+");			  //右
			
		y++;
		printf("\n");
	}

	for (x = 0; x < h; x++)
	{
		printf("+");
	}							  //最末行

	printf("\n");
	
	system("pause");
	return 0;
}