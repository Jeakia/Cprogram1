#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
	int a = 0;
	return 0;
}

//int main() {
//	int a = 10;//����4���ֽ�
//	int* p=&a;//ȡ��ַa
//	/*printf("%p\n", &a);
//	printf("%p\n", p);*/
//	*p=20;//�����ò�����
//	printf("a=%d\n", a);
//	//printf("%p", &a);
//	//��һ�ֱ�����������ŵ�ַ��--ָ�����
//	return 0;
//}

//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
// ָ������Ĵ�С
//32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�
//int main() {
//	printf("%d\n", sizeof("char *"));
//	printf("%d\n", sizeof("short *"));
//	printf("%d\n", sizeof("int *"));
//	printf("%d\n", sizeof("double *"));
//	return 0;
//}
// 
// 
//#define �����ʶ������
//#define MAX 100;
// 
//#define ���Զ����--������

////������ʵ��
//Max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main() {
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	int max = Max(a, b);
//	printf("max=$d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//
//	return 0;
//}


//�ؼ���
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
//extern �����ⲿ����
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
// union -- ������
// void -- ��
// volatile
// typedef
// 
//int main() {
//	int a = 10;//�ֲ�����-�Զ�����
//
//	return 0;
//}

//int main() {
//	//int float;//err
//	// �ź�--С��
//	//typedef --���Ͷ��� -- �����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int sum2 = 20;
//	return 0;
//
//}
// 
// 
//int main() {
//	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int��
//	//unsigned int num =0;�޷��ŵ�
//	//struct --�ṹ��ؼ���
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
//	//arr[4];//[]--�±�Ӧ�ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--�������ò�����
//	printf("%d\n", sum);
//	return 0;
//}

//1��static ���ξֲ�����
//�ֲ��������������ڱ䳤
//2�� static����ȫ�ֱ���
// static�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û����ʹ���ˡ�
//3��static���κ���
//int main() {
//	//extern --�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//�����ⲿ����
//static���κ���
//Ҳ�Ǹı��˺����������򣨲�׼ȷ��
//static���κ����ı��˺�������������
//�ⲿ��������-->�ڲ���������

//�����ⲿ����
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum= Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//void test() {
//	static int a = 1;//a ��һ����̬�ľֲ����� static��̬
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
//	//���
//	//0--��
//	//��0 -- ��
//	//&&--�߼���
//	//||--�߼���
//	int a = 0;
//	int b = 5;
//	int c = a && b;//����
//	int d = a || b;//����
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	return 0;
//}


//int main() {
//	int a = (int)3.14;//ǿ��ת��
//
//	return 0;
//}


//int main() {
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã��ټӼ�
//	//printf("a=%d b=%d\n", a, b);//a=11,b=10
//
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int main() {
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;//b���з��ŵ����Σ�
//	//~--����2���ƣ�λȡ��
//	// 00000000000000000000000000000000
//	// 11111111111111111111111111111111
//	// Դ�룬���룬����
//	// �������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	// 11111111111111111111111111111111 ����
//	// 11111111111111111111111111111110 ����
//	// 10000000000000000000000000000001 ԭ��
//	//1010
//	//0101
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//}
// 
// ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ���� -- ԭ�룬���룬������ͬ
// ���� --> ����
//		ԭ�� -->      ����  ����>		 ����
// ֱ�Ӱ�������   ԭ��ķ���λ����       ����+1
//				  ����λ��λȡ���õ���
// 
// -2
//10000000000000000000000000000010 --ԭ��
//11111111111111111111111111111101 --����
//11111111111111111111111111111110 --���� 
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
//	printf("%d\n", sizeof(arr));//���������С���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}


//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ��:%d\n", num1);
//	else
//		printf("�ϴ�ֵ��:%d\n", num2);
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
