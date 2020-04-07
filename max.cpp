#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 

int main()
{
	int n, a[20], i, max = 0, add = 0;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		add = add + a[i];
		if (max < add)
		{
			max = add;
		}
		else if (add < 0)
		{
			add = 0;
		}
	}
	printf("%d", max);
	system("pause");
}
