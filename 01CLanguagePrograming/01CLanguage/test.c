#define _CRT_SECURE_NO_WARNINGS 1
// ����ͷ�ļ�
#include <stdio.h>

/*
	��ʼC����
*/

// ��һ��C���Գ���
//int main()
//{
//	// ����Ļ�ϴ�ӡHello World
//	printf("Hello World\n");
//	return 0;
//}



// ��������
//int main()
//{
//	// ���������������ڴ���ռ���ֽ���
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}


// �򵥵ļ���
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
//	// extern �����ⲿ���ţ�ֻ�������������κζ���
//	extern int a;
//
//	// error û�н����κζ��壬�����Ը�ֵ
//	a = 10;
//
//}
/// һ������£��ѽ����洢�ռ��������֮Ϊ"����"�����Ѳ���Ҫ�����洢�ռ��������֮Ϊ"����"


//int main()
//{
//	// ��������ͬ���͵ı���
//	//int a, b, c;
//
//	// ��������ͬ���͵ı���������ֵ
//	/*int a, b, c;
//	a = 10;
//	b = 20;
//	c = 30;*/
//
//	// ��������ͬ���͵ı���ͬʱ��ֵ
//	//int a = 10, b = 20;
//
//
//	// ����������������ֵ��ͬ����
//	/*int a, b, c;
//	a = b = c = 10;*/
//
//
//	//int a, b, c = 10;  // ��д���Ǵ���a��b��û�г�ʼ����
//
//	//int a = b = 10;  // ������� �� ���Ϸ���
//
//}


// ȫ�ֱ���
//int num = 100;
//int a = 200;
//int main()
//{
//	// �ֲ�����
//	int a = 10;
//
//	// ���ֲ�������ȫ�ֱ���������ͬ��ʱ�򣬾ֲ���������
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


// ����
//#define MAX 10
//int main()
//{
//	// ���泣��
//	/*10;
//	20;
//	'a';
//	3.14;
//	"hello";*/
//
//
//	//// const���εĳ�����
//	//const int a = 10;
//	//printf("a = %d\n", a);
//	////a = 20; // error 
//
//
//	//// const���εĳ�������Ҫ�ڶ����ͬʱ���г�ʼ����
//	//const int a;
//	//a = 100; // error
//
//
//	// #define ����ı�ʶ������
//	//int arr[MAX] = {0};
//}

// ö�ٳ���
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


// ��������

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

