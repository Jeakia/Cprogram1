#define  _CRT_SECURE_NO_WARNINGS 1



//add(int x, int y) {
//	int z = 0;
//	z + z + y;
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum =add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//c�����еķ���
//	�⺯��
//	�Զ��庯��

//www.cplusplus.com

//strcpy

#include<string.h>
#include<stdio.h>
//int main() {
//	//strlen = string lenght -- ���ַ��������йص�
//	//strcpy = string copy -- �ַ�������
//
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory -- �ڴ棻 set -- ����
//void * ptr��int value ,size_t num
// ptr �ڴ�� value ֵ num ����

//int main() {
//	char arr[] = "hello world";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//	//***** world
//}

//�Զ��庯��
//int get_max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	printf("max=%d\n", max);
//	max=get_max(100, 200);
//	printf("max=%d\n", max);
//	return 0;
//}

//дһ�����������ͽ���������
//int main() {
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//
//}

//ΪʲôҪ��swap2����swap1��
//��ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�εġ�
//���Բ��ܴﵽ��õ�Ч��

//Swap2(int* pa, int* pb) {
//	int tmp = 0;	
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}


//void Swap1(int x, int y) {//void û�з���ֵ
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//��ֵ����
//	//Swap1(a, b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	//���ú���swap2(��ַ���ã�
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//
//}


//�β�-��ʽ����-��ʽ�ϵĲ���

//int main() {
//	int a = 10;
//	int* pa=&a;//paָ�����
//	*pa=20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}
//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�ò�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ�쵽ʵ��2
//��ַ���ã������ú����ͺ�������ı���������������ϵ��

#include<math.h>
//��ϰ
//0,����������1�����Ƿ���0
//int is_prime(int n) {
//	//2->n-1
//	int j = 0;
//	for (j = 2;j < n;j++) {
//		if (n % j == 0)
//			return 0;
//		
//	}
//	return 1;
//}
//int main() {
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200;i++) {
//		//�ж�i�Ƿ�������
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//1,дһ�������ж�һ���Ƿ�������
//int is_leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		//�ж�year�Ƿ�������
//		if (1 == is_leap_year(year)) {
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//


//2,���ֲ���	
					//������arr��һ��ָ��
//int binary_search(int arr[], int k,int sz) {
//	//�㷨��ʵ��
//	
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right) {
//		int mid = (left + right)/ 2;//�м�Ԫ�ص��±�,����Ҫд��ѭ������
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//	 
//
//}

//3,дһ������ʵ��һ��������������Ķ��ֲ���
//int main() {
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ������
//	//����ҵ��˷��أ�������ֵ��±꣬�Ҳ����ķ���-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//						��Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1) {
//		printf("can't find it\n");
//	}
//	else {	
//		printf("found it: %d\n", ret);
//	}
//	return 0;
//}



//4,дһ��������ÿһ�ε���n+1
//void add(int *p) {
//	(*p)++;
//}
//int main() {
//
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);//1
//	add(&num);
//	printf("num=%d\n", num);//2
//	add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
//Ƕ�׵���--�����ͺ���֮����л����
//��ʽ����--��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int main() {
//	int len = 0;
//	////1
//	//len=strlen("abc");
//	//printf("%d\n", len);
//	////2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main() {
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

#include"add.h"//������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ�����Ҫ��

int main() {
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}


