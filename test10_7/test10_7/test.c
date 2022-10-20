#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);//sizeof里面的函数不会真正进行运算。
//
//	//int a = 0;
//	//char b = 'w';
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof a);//变量括号省略
//	//printf("%d\n", sizeof(int));//括号不可以省略
//
//	//printf("%d\n", sizeof(b));
//	//printf("%d\n", sizeof(char));
//
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(int[10]));
//	return 0;
//}

//int main() {
//	//int a = 0;
//	////~按（2进制）位取反
//	////000000000000000000000000000000(补码）
//	////111111111111111111111111111111（按位取反--补码）
//	////111111111111111111111111111110 （反码）
//	////100000000000000000000000000001 (原码）
//	//printf("%d\n",~a);
//
//	int a = 11;
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100（或）
//	// 1<<2
//	//00000000000000000000000000001111
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//
//
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011
//	//00000000000000000000000000001011(按位与取反）
//	
//	//
//	//00000000000000000000000000000001
//	//00000000000000000000000000000100(向左移动两位，按位取反）
//	//00000000000000000000000000001011
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//	//
//	return 0;
//}

//++
//int main() {
//	int a = 10;
//	//printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，后++	
//	return 0;
//}

//* 间接访问操作符--解引用操作符
// 
// 
// 
// 
// 
//() 强制类型转换
//int main() {
//	int a = (int)3.14;//错误写法 int a = int (3.14),如同调用
//	printf("%d\n", a);
//	return 0;
//}

//逻辑语言
//int main() {
//	int a = 3;
//	int b = 0;
//	int c = a && b;//并且
//	printf("%d\n", c);
//
//	c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i=a++||++b||d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}//&& 2 2 3 5



//条件操作符
//exp1? exp2 : exp3 (1为真 2要算； 1为假，3要算）
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max=(a > b ? a : b);
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	//b = (a > 5 ? 3 : -3);
//
//
//	return 0;
//}


//逗号表达式
//逗号表达式，就是用逗号隔开的多个表达式。逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果。
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//}

//int a = 0;
//int main() {
//	//a = get_val();
//	//count_val(a);
//	//while (a > 0) {
//	//	a = get_val();
//	//	count_val(a);
//	//}
//	//改写
//	while (a = get_val(), count_val(a), a > 0) {
//		//业务处理
//	}
//}


//下标引用操作符
//1,[]下标引用操作符
//操作数：一个数组名+一个索引值
//int main() {
//	int a[10] = { 0 };
//	a[4] = 10;//操作符为[],操作数为a和4
//	1 + 2;
//
//	return 0;
//}


//函数调用操作符
//get_max(int x, int y) {//调用函数的语法规则
//	return x > y ? x : y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);//函数调用操作符，操作数有get_max, a ,b
//	printf("max=%d\n", max);
//	return 0;
//}


//访问一个结构体成员
//学生
//int float 
//
//创建了一个结构体-struct stu
//struct stu {//学生类型
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main() {
//	int a = 10;
//	//使用struct stu这个类型创建了一个学生对象s1,并初始化
//	struct stu s1={"张三",20,"58"};
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);//等于printf("%s\n", (*ps).name)
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//结构体指针->成员名
//
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量，成员名
//	return 0;
//	
//}



//表达式求职
//表达式求值的顺序一部分是由操作符的优先级和结合性决定。
//同样，有些表达式的操作数在求值的过程中可能需要转换为其他类型



//隐式类型转换
//整型提升
//比如：
//char a,b,c
//...
//a=b+c;
//b和c的值被提升为普通整形，然后再执行加法运算。
//加法运算完成之后，结果被截断，然后再存储于a中
//int main() {
//	char a = 3;
//	//a的比特位 00000000000000000000000000000011 char是字节，只能放八个比特位
//	//00000011 -a
//
//	char b = 127;
//	//00000000000000000000000001111111
//	//char b - 01111111
//
//	char c = a + b;
//	//00000000000000000000000000000011  3（char)
//	//00000000000000000000000001111111  123(char)
//	//00000000000000000000000010000010  
//	//10000010 --c
//	// 
//	// 整型提升：是按照变量的数据类型的符号位来提升的
//
//	printf("%d\n", c);//-126
//	//10000010 --c（char) 整型提升
//	//11111111111111111111111110000010 --补码
//	//11111111111111111111111110000001 --反码
//	//10000000000000000000000001111110 --原码
//	//-126
//	return 0;
//	//表达式的整形运算要在cpu的相应运算器件内执行，CPU内整形运算器（ALU）的操作数的字节长度一般就是int的字节长度，同时
//	//也是cpu的通用寄存器内存。
//	//因此，即使两个char类型的相加，在cpu执行时实际上也要先转换为cpu内整形操作数的标准长度
//	//通用cpu是难以实现两个8比特位之家相加运算（虽然机器指令中可能有这种字节相加指令）。所以，表达式中各种长度可能小于int长度
//	//的整型值，都必须先转换为int或者unsigned Int ,才能送入cpu去执行运算。
//}


////实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}

//算术转换
// 如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数的转换为另一个操作数的类
//型，否则操作就无法进行。下面的层次体系称为寻常算术转换。
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int

//操作符的属性
//复杂表达式的求值有三个影响的因素。
//1. 操作符的优先级
//2. 操作符的结合性
//3. 是否控制求值顺序。
//两个相邻的操作符先执行哪个？取决于他们的优先级。如果两者的优先级相同，取决于他们的结合性。


//指针
//int main() {
//	int a = 10;
//	int* p = &a;//指针变量(指针就是地址，地址也是指针）
//	return 0;
//}
//指针变量
//我们可以通过& （取地址操作符）取出变量的内存其实地址，把地址可以存放到一个变量中，这个
//变量就是指针变量
//存放在指针中的值都被当成地址处理

//指针和指针类型

//int main() {
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	int a = 0x11223344;
//	//int* pa=&a;
//	//*pa = 0;
//	char* pc=&a;
//	*pc = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}//指针为什么要区分类型？
//////指针的类型决定了指针向前或者向后走一步有多大



//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	/*int *p=arr;*///数组名--首元素地址
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = 1;
//	}
//	return 0;
//}
//指针进行加减，加一步减一步能走多大距离
//解引用操作时候能访问几个字节


//野指针
//指针未初始化
//int main() {
//	int a;//局部变量不初始化，默认是随机值。
//	int* p;//局部的指针变量，就被初始化随机值。
//	*p=20;
//	return 0;
//}

//指针越界访问
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 12; i++) {
//		*(p++)=i;
//	}
//	return 0;
//}

//指针指向的空间内存释放
//int *test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int *p=test();
//	/**p = 20;*/
//	return 0;
//}

//规避野指针
/*1. 指针初始化 
int main() {
	int a = 10;
	int* pa = &a;//初始化

	int* p=NULL;//NULL--强制类型转换成0，用来初始化指针，或给指针赋值。
}

2. 小心指针越界

3*. 指针指向空间释放即使置NULL
int main() {
	int a = 10;
	int* pa = &a;
	*pa = 20;
	pa = NULL;
}

4. 避免返回局部变量的地址
5. 指针使用之前检查有效性*/

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (i = 0; i < 5; i++) {
//		printf("%d\n", *p);
//		//p = p + 1;
//		//p++;
//		//p += 2;
//		p-=2;
//	}
//	return 0;
//}


//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//for (vp = &values[0]; vp < &values[N_VALUES];) {
//	*vp++ = 0;
//}

//int main() {
//	char ch[5]={0};
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", & arr[9] - &ch[0]);//err不可预知
//	return 0;
//}


//int my_strlen(char* str) {
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;//元素个数
//}
//int main() {
//	//strlen --求字符串长度
//	//递归 --模拟实现了strlen- 计数器的方式1，递归的方式2
//	//
//	char arr[] = "bit";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//指针的比较大小
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main() {
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--) {
//		*vp = 0;
//	}
//	return 0;
//}

//指针和数组
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//首元素的地址
//	printf("%p\n",&arr[0]);
//	printf("%p\n", &arr);//整个数组的地址
//	//1,&arr - &数组名 -- 数组名不是首元素地址--数组名表示整个数组 - &数组名 取出的是整个数组的地址。
//	//2，sizeof(arr) --sizeof(数组名） --数组名也不是首元素地址，表示的是整个数组， sizeof(数组名)计算的是整个数组的大小
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p+i));
//	}
//	/*for (i = 0; i < 10; i++) {
//		printf("%p ========= %p\n", p+i,&arr[i]);
//	}*/
//
//	return 0;
//}

//二级指针
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int* * ppa =&pa;//二级指针
//	**ppa = 20;
//	printf("%d\n", ** ppa);
//	printf("%d\n", a);
//
//	//int* * * pppa=&ppa;//三级指针
//	return 0;
//}


//好孩子 --孩子
//指针数组 --数组 -- 存放指针的数组
//数组指针 --指针

//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	//整形数组 - 存放整形
//	//字符数组 - 存放字符
//	//指针数组 - 存放指针
//	//int arr[10];
//	int* arr2[3]={&a,&b,&c};//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d ", * (arr2[i]));
//		//指针数组是指针还是数组？
//		//答案：是数组。是存放指针的数组。
//		//数组我们已经知道整形数组，字符数组
//	}
//	return 0;
//}


//结构体

//描述一个学生，一些数据
//名字
//年龄
//电话
//性别

//struct结构体关键字 stu - 结构体标签；  struct - 结构体类型；
//struct stu {//定义一个结构体类型
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//这是一条语句 s1,s2,s3是三个全局的结构体变量
//int main() {//创建结构体变量
//	struct stu s;//结构体 局部变量
//
//	return 0;
//}


//typedef struct stu {//定义一个结构体类型
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//类型（重命名）
//int main() {
//	struct stu s1;
//	stu s2;
//	return 0;
//}
//
//struct point {
//	int x;
//	int y;
//}p1;//声明类型的同时定义变量p1
//struct point p2;//定义结构体变量p2
//int main() {
//	stu s = { "张三","15249287076","男"};//初始化
//	struct stu s2={"旺财","1596668862","保密"};
//	return 0;
//}
//
//struct point s3


//结构体成员访问
//struct S {
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T {
//	char ch[10];
//	struct S s;
//	char* pc;
//};//结构体的成员可以是标量，数组，指针，甚至是其他结构体
//int main() {
//	char arr[] = "hello bit\n";
//	struct T t ={ "hehe ", {100,'w',"hello world",3.14}, arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}


//结构体传参
//typedef struct stu {
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//重命名改成了stu,结构体类型
//void print1(stu tmp) {//不要返回值
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void print2(stu* ps) {//结构体指针
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps-> age);
//	printf("tele:%s\n", ps-> tele);
//	printf("sex:%s\n", ps-> sex);
//}
//int main() {
//	stu s = { "张三",40,"15598886688","男" };
//	//打印结构体数据
//	//print1和print2哪个更好
//	print1(s);
//	print2(&s);
//	return 0 ;
//}

//首选print2，函数传参的时候，参数是需要压栈的，如果传递一个结构体对象的时候，结构体过大，
//参数压线的系统开销比较大，所以会导致性能下降

int add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
int main() {
	int a = 10;//压栈操作符
	int b = 20;
	int ret = 0;
	ret = add(a, b);
	return 0;
}

//数据结构
//-----线性数据结构
//顺序表
//链表
//栈：先进去的后出，后进的先出（插入一个元素：压栈；删除一个元素：出栈）
// 函数栈帧的创建与销毁
//队列
//-----树形数据结构
//二叉树
//------图



