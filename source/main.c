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
	}							  //�Ĥ@��

	printf("\n");

	while (y <v-2)
	{
		printf("+");			  //��
		for (x = 0; x <h-2; x++)  //�����Ů�:�Ů��=(�e��-2)
		{
			printf(" ");
		}
		printf("+");			  //�k
			
		y++;
		printf("\n");
	}

	for (x = 0; x < h; x++)
	{
		printf("+");
	}							  //�̥���

	printf("\n");
	
	system("pause");
	return 0;
}