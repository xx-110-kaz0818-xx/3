#include <stdio.h>

int main(void)
{
	int i, j;
	int tmp;
	int x=0;
	int a[x];

printf("データ数を入力");
scanf(" %d", &x);

//配列に値を格納
for(i = 0; i < x; i++)
{
	printf("数字を入力",i);
	scanf(" %d", &a[i]);
}
	//	昇順ソートのプログラム
	for (i = 0; i < x ; i++)
	{
		for (j = i + 1; j < x; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	//	並べ替え結果の表示
	for (i=0 ; i < x ; i++)
	{
		printf(" %d", a[i]);
	}

	return 0;
}