#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	/*int ch = 0;*/
//	//EOF - end of file �ļ�������־
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;*/
//
////	//�⴮�����������:
////	int ret = 0;
////	int ch = 0;
////	char password[20] = { 0 };
////	printf("����������\n");
////	scanf("%a", password);//�������룬�������password��������
////	//��������ʣһ��\n��
////	//��ȡһ�¡�\n'
////	while ((ch = getchar()) != '\n') {
////		;
////	}
////	printf("��ȷ��(Y/N)");
////	ret = getchar();
////	if (ret == 'Y')
////	{
////		printf("ȷ�ϳɹ�\n");
////
////	}
////	else {
////		printf("����ȷ��\n");
////	}
////	return 0;
//	
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF) {
//	//	if (ch < '0' || ch>'9')
//	//		//����ת���ַ���
//	//		continue;
//	//	putchar(ch);
//	//}
//	//return 0;
//	
//
//}

//int main() {
//	int i = 10;
//
//
//
//
//
//
//	while (i < 10)//�ж�
//	{
//
//
//
//
//
//		//...
//		i++//����
//	}
//}

//int main() {
//	int i = 0;
//	//��ʼ�����жϣ�����---ȫ��������һ��
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)//��Ҫ��forѭ�����޸Ĵ��룬��ֹ������ѭ��
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 10;
//	for (i = 10; i < 10; i++) {//����д��ǰ�պ�д����ǰ������䣬���濪���䡣
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//һЩforѭ���ı���
//int main() {
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) {
//		
//		for (; j < 10; j++) {
//			printf("hehe\n");
//
//		}//10*10=100
//		
//	}
//	return 0;
//}

//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k == 0; i++, k++)
//		k++;
//	return 0;
//}

//int main() {
//	do 
//		ѭ����䣺
//	while(���ʽ)��
//}


//do while circle
//int main() {
//	int i = 1;
//	printf("%d ", i);
//	do {
//		i++;
//		if (i == 5)
//		continue;
//		printf("%d ", i);
//		
//	} while (i <= 10);
//	return 0;
//}

//дһ��������n�Ľ׳�
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("ret=%d ", ret);
//	return 0;
//}

//�׳����
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n=1; n<=3; n++){
//		ret = 1; 
//		for (i = 1; i <= n; i++) {
//			ret = ret * i;
//		}//n�Ľ׳�
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d ", sum);
//	return 0;
//}

//�Ż�
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n=1; n<=10; n++){
//			ret = ret * n;
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d ", sum);
//	return 0;
//}

//������
//��һ�����������в��Ҿ����ĳ������n����д int binsearch(int x,int v[], int n);
//���ܣ���v[0]<=v[1]<=v[2]...<=v[n-1]�������в���x
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//		//дһ���룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("i found it: %d\n", i);
//			break;
//		}
//	}if (i == sz)
//		printf("can't find it\n");
//	
//	return 0;
//}

//���ֲ�
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
//	int right = sz- 1;//���±�
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//
//		}
//		else if(arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			printf("i found it:%d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("i cant find it");
//	}return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���

#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main() {
//	//welcome to bit !!!
//	//w#################
//	//we###############!
//	//wel#############!!
//	//...
//	//welcome to bit !!!
//	//
//	char arr1[] = "welcome to bit !!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

int main() {
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0) {//==�����ñȽ������ַ��Ƿ���ȣ�Ӧ����һ���⺯��-strcmp
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�����������������\n");
		}
		if (i == 3) {
			printf("������������������˳�\n");
		}
	}
	return 0;
}