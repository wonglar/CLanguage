#define _CRT_SECURE_NO_WARNINGS 1
// 引入头文件
#include <stdio.h>

/*
	初始C语言
*/

// 第一个C语言程序
//int main()
//{
//	// 在屏幕上打印Hello World
//	printf("Hello World\n");
//	return 0;
//}



// 数据类型
//int main()
//{
//	// 各个数据类型在内存中占的字节数
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}


// 简单的计算
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	// extern 声明外部符号，只做声明，不做任何定义
//	extern int a;
//
//	// error 没有进行任何定义，不可以赋值
//	a = 10;
//
//}
/// 一般情况下，把建立存储空间的声明称之为"定义"，而把不需要建立存储空间的声明称之为"声明"


//int main()
//{
//	// 定义多个相同类型的变量
//	//int a, b, c;
//
//	// 定义多个相同类型的变量，而后赋值
//	/*int a, b, c;
//	a = 10;
//	b = 20;
//	c = 30;*/
//
//	// 定义多个相同类型的变量同时赋值
//	//int a = 10, b = 20;
//
//
//	// 定义多个变量，而后赋值相同的数
//	/*int a, b, c;
//	a = b = c = 10;*/
//
//
//	//int a, b, c = 10;  // 此写法是错误，a和b并没有初始化！
//
//	//int a = b = 10;  // 编译出错 ， 不合法！
//
//}


// 全局变量
//int num = 100;
//int a = 200;
//int main()
//{
//	// 局部变量
//	int a = 10;
//
//	// 当局部变量和全局变量名称相同的时候，局部变量优先
//	printf("a = %d\n", a);
//	printf("num = %d\n", num);
//}


//int a = 10;
//int main()
//{
//	{
//		int a = 20;
//	}
//
//	printf("a = %d\n", a);
//}


// 常量
//#define MAX 10
//int main()
//{
//	// 字面常量
//	/*10;
//	20;
//	'a';
//	3.14;
//	"hello";*/
//
//
//	//// const修饰的常变量
//	//const int a = 10;
//	//printf("a = %d\n", a);
//	////a = 20; // error 
//
//
//	//// const修饰的常变量，要在定义的同时进行初始化。
//	//const int a;
//	//a = 100; // error
//
//
//	// #define 定义的标识符常量
//	//int arr[MAX] = {0};
//}

// 枚举常量
//enum Color
//{
//	RED = 10,
//	GREEN = 15,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = GREEN;
//	printf("%d\n", c);
//	printf("%d\n", BLUE);
//
//	//RED = 100;  // error
//}


// 数据类型

//int main()
//{
//	int a = 20;
//	int b = 070;
//	int c = 0x5c;
//	printf("%d\n", a);
//	printf("%o\n", a); 
//	printf("%x\n", a);
//	printf("--------------------\n");
//
//	printf("%o\n", b);
//	printf("%x\n", c);
//
//	return 0;
//}


//int main()
//{
//
//	unsigned int a = 100;
//	printf("%u\n", a);
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("num = %d\n", num);
//}


//int main()
//{
//	int num = 0;
//	scanf("love%d", &num);
//	printf("num = %d\n", num);
//	return 0;
//}


//int main()
//{
//
//	printf("%c\n", '\x64');
//	return 0;
//}

