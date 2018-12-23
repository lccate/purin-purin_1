//文件名：actural_formal
//作  者：ccate
//时  间：2018.12
//描  述：实参和形参
//形参在未调用时，是不占用内存的，只有在函数调用时被分配内存，函数调用完成后，形参所占的内存被释放
//c语言中，形参与实参单向传递，只能是实参传递给形参，不能是形参传递给实参,形参的值改变后不影响实参

#include<stdio.h>

void test(int a)//a是形参（形参必须要指定数据类型，不能是表达式）
{
	printf("%d\n",a);
}

int main()
{
	int i = 7;
	test(i);//实参可以是变量，常量，也可以是表达式（但是类型一定要匹配）
	test(5);
	test(6+7);
	return 0;
}