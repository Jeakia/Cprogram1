#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
	int a = 0;
	return 0;
}

//int main() {
//	int a = 10;//申请4个字节
//	int* p=&a;//取地址a
//	/*printf("%p\n", &a);
//	printf("%p\n", p);*/
//	*p=20;//解引用操作符
//	printf("a=%d\n", a);
//	//printf("%p", &a);
//	//有一种变量是用来存放地址的--指针变量
//	return 0;
//}

//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
// 指针变量的大小
//32位平台是4个字节，64位平台是8个字节
//int main() {
//	printf("%d\n", sizeof("char *"));
//	printf("%d\n", sizeof("short *"));
//	printf("%d\n", sizeof("int *"));
//	printf("%d\n", sizeof("double *"));
//	return 0;
//}
// 
// 
//#define 定义标识符常量
//#define MAX 100;
// 
//#define 可以定义宏--带参数

////函数的实现
//Max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main() {
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max = Max(a, b);
//	printf("max=$d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//
//	return 0;
//}


//关键字
//int 
//float
//break
//auto
//case
//char
//const
//continue
//default
//do..while
//double
//else
//enum
//extern 引入外部符号
//float 
//for
//goto
//if
//int
//long 
//register
// unsigned
// signed
// switch
// union -- 联合体
// void -- 无
// volatile
// typedef
// 
//int main() {
//	int a = 10;//局部变量-自动变量
//
//	return 0;
//}

//int main() {
//	//int float;//err
//	// 张红--小红
//	//typedef --类型定义 -- 类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int sum2 = 20;
//	return 0;
//
//}
// 
// 
//int main() {
//	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int；
//	//unsigned int num =0;无符号的
//	//struct --结构体关键字
//	//
//	return 0;
//
//}

//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() {
//	//int arr[10] = { 0 };
//	//arr[4];//[]--下标应用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}

//1，static 修饰局部变量
//局部变量的生命周期变长
//2， static修饰全局变量
// static改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法再使用了。
//3，static修饰函数
//int main() {
//	//extern --声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//声明外部函数
//static修饰函数
//也是改变了函数的作用域（不准确）
//static修饰函数改变了函数的链接属性
//外部连接属性-->内部链接属性

//声明外部函数
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum= Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//void test() {
//	static int a = 1;//a 是一个静态的局部变量 static静态
//	a++;
//	printf("a=%d\n", a);
//}
//int main(){
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//	}
//		return 0;
//	}


//int main() {
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	return 0;
//}


//int main() {
//	//真假
//	//0--假
//	//非0 -- 真
//	//&&--逻辑与
//	//||--逻辑或
//	int a = 0;
//	int b = 5;
//	int c = a && b;//并且
//	int d = a || b;//或者
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	return 0;
//}


//int main() {
//	int a = (int)3.14;//强制转换
//
//	return 0;
//}


//int main() {
//	int a = 10;
//	//int b = a++;//后置++；先使用，再加加
//	//printf("a=%d b=%d\n", a, b);//a=11,b=10
//
//	int b = ++a;//前置++，先++，再使用
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int main() {
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//b是有符号的整形，
//	//~--按（2进制）位取反
//	// 00000000000000000000000000000000
//	// 11111111111111111111111111111111
//	// 源码，反码，补码
//	// 负数在内存中存储的时候，存储的是二进制的补码
//	// 11111111111111111111111111111111 补码
//	// 11111111111111111111111111111110 反码
//	// 10000000000000000000000000000001 原码
//	//1010
//	//0101
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//}
// 
// 只要是整数，内存中存储的都是二进制的补码
// 正数 -- 原码，反码，补码相同
// 负数 --> 补码
//		原码 -->      反码  ——>		 补码
// 直接按照正负   原码的符号位不变       反码+1
//				  其他位按位取反得到的
// 
// -2
//10000000000000000000000000000010 --原码
//11111111111111111111111111111101 --反码
//11111111111111111111111111111110 --补码 
// 
// 
//11111111111111111111111111111111
//1*2^32-1


//int main() {
//	int a = 10;
//	int arr[] = {1,2,3,4,5,6};//6*4=24
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//a
//	//printf("%d\n", sizeof int);//err
//	printf("%d\n", sizeof(arr));//计算数组大小，字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是:%d\n", num1);
//	else
//		printf("较大值是:%d\n", num2);
//	return 0;
//}


//int Max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max=Max(num1, num2);
//	printf("Max=%d\n", max);
//
//	return 0;
//}
