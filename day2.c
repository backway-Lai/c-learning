#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void) {
//	int power(int x, int y);
//	int a, b;
//	printf("Please enter a base number and an exponent number:");
//	scanf("%d,%d", &a, &b);
//	printf("%d power %d equals %d\n", a, b, power(a, b));
//	return 0;
//}
//int power(int x, int y) {
//	int result = 1;
//	while (y > 0) {
//		result = result * x;
//		y = y - 1;
//	}
//	return result;
//}



//使用子函数设计的可以自定义求和两端的程序
//int main(void) {
//	int sum(int x, int y);
//	int a,b;
//	printf("Please enter two numbers:\n");
//	scanf("%d,%d", &a,&b);
//	printf("The sum of %d to %d is %d\n",a, b, sum(a, b));
//	return 0;
//}
//int sum(int x, int y) {
//	int result = x;
//	int i = x;
//	while (i < y) {
//		i = i + 1;
//		result = result + i;
//	}
//	return result;
//    
//}



//通过简单的if语句实现了对不合理输入的报错
int main(void) {
	int sum(int x, int y);
	int a, b;
	printf("Please enter the start of a sum:\n");
	scanf("%d", &a);
	printf("Please enter the end of a sum:\n");
	scanf("%d", &b);
	if (a >= b) {
		printf("Please confirm your entry");
		return 1;
	}
	else {
		printf("The sum of %d to %d is:%d\n", a, b, sum(a, b));
		return 0;
	}
}
int sum(int a, int b) {
	int result = a;
	int i = a;
	while (i < b) {
		i = i + 1;
		result = result + i;
	}
	return result;
}
