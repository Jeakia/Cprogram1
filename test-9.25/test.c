#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include"add.h"
//
//int main(){
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//�ݹ�
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//
//	}
//	printf("%d\n", n % 10);
//}
//
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1)1 2 3 4
//	return 0;
//}

//��ϰ2 ���ַ�������
#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0') 
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 
//��������ʱ����
//�õݹ�ķ������Ѵ��»�С
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("")
//1+1+1+0
//=2
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main() {
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n", len);
//	return 0;
//}

//ѭ��
//int fac1(int n) {
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++) {
//		ret *=i;
//	}
//	return ret;
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n",ret);
//	return 0;
//}

//�ݹ�
//int fac2(int n) {
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac2(n - 1);
//}
//
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=fac2(n);//ѭ���ķ�ʽ
//	printf("%d\n",ret);
//	return 0;
//}

//쳲���������
//1 1 2 3 5 8 13 21 34 55

//������n��쳲��������С�
//int count = 0;
//int fib(int n) {
//	if (n == 3) {//���Ե�����쳲��������ļ������
//		count ++;
//	}
//
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main() {
//	int n = 0;
//	
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--������������
//	ret = fib(n);
//	printf("ret=%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}

//�ݹ�--�����ķ���

//쳲���������
//1 1 2 3 5 8 13 21 34 55

//int count = 0;
//int fib(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main() {
//	int n = 0;
//
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--������������
//	ret = fib(n);
//	printf("ret=%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}

//void test(int n) {
//	if (n < 10000) {
//		test(n + 1);
//	}
//}
//
//int main() {
//	test(1);
//	return 0;
//}


//����
//int main() {
//	//int arr[10]={1,2,3};//��ʼ��--����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5]={'a',98};
//	//char arr3[5] = "ab";//ok
//	char arr4[7] = "abcdef";//����\0
//	//strlen��sizeof ������
//	//1��string��sizeofû��ʲô����
//	//2��strlen�����ַ������ȵ�--ֻ�ܶ��ַ����󳤶�	--�⺯�� --ʹ�õ�����ͷ�ļ�
//	//3��sizeof������������飬���͵Ĵ�С -- ��λ���ֽ� --������
//	printf("%d\n", sizeof(arr4));//sizeof--����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ��--char7*1=7
//	printf("%d\n", strlen(arr4));//
//	//strlen ���ַ����ĳ���-- \0֮ǰ���ַ�����
//	//[a b c d e f \0]
//	//6
//	/*int n = 5;*/
//	return 0;
//}
////[]�ŵ��ǳ��������Ǳ�����

//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//һά�����ʹ��
//int main() {
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//                       0  1  2  3  4  5  6
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i <len;i++) {//�޷�����
//		printf("%c ", arr[i]);
//	}
//	//printf("%c\n", arr[3]);
//	return 0;
//


//�±����ò�����[]
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//1��������ʹ���±������ʵģ��±��Ǵ�0��ʼ
//2������Ĵ�С����ͨ������õ�

//int arr[10];
//int sz=sizeof[arr]/sizeof(arr[0]);

//һλ�������ڴ��еĴ洢
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++) {
//		printf("&arr[%d]= %p\n",i, &arr[i]);
//	}
//	return 0;
//}

//int main() {
//	//��ά����ĳ�ʼ��
//	int arr[3][4] = { {1,2,3},{4,5} };//�У���
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3;i++) {
//		int j = 0;
//		for (j = 0;j < 4;j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6];
//	//int arr[] = { 1,2,3,4 };
//	//int arr[][4] = { 1,2,3,4,5,6,7,8 };
//	//�п���ʡ�ԣ��в�����ʡ��
//	return 0;
//}

//��ά�������ڴ��еĴ洢
int main() {
	int arr[3][4] = { {1,2,3},{4,5} };//�У���
	int i = 0;
	for (i = 0; i < 3;i++) {
		int j = 0;
		for (j = 0;j < 4;j++) {
			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
		}
	}
	return 0;
}

