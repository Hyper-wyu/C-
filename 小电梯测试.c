#include<stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	int a;
	printf("请输入你要到达的楼层：");
	scanf("%d", &a);
	for (a < 0 && a>22)
	{
		printf("对不起您输入的楼层不存在，请重新输入！");
	}
	printf("您已到达%d楼,祝您学习愉快！",a);
	return 0;
}