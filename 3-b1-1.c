/*2353126 信03 崔露文*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
	int r, h;
	printf("请输入半径和高度\n");
	scanf("%d %d", &r, &h);
	printf("圆周长     : %.2f\n", 2 * pi * r);
	printf("圆面积     : %.2f\n", pi * r * r);
	printf("圆球表面积 : %.2f\n", 4 * pi * r * r);
	printf("圆球体积   : %.2f\n", 4.0 / 3 * pi * r * r * r);
	printf("圆柱体积   : %.2f\n", pi * r * r * h);
	return 0;
}
