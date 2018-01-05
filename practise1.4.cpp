/* 练习1.4 我们的程序使用加法运算符＋来将两个数相加。编写程序使用乘法运算符＊，
来打印两个数的积。 */
#include <iostream>

int main(void)
{
  /* 申明整型变量 */
  int v1,v2;
  std::cin >> v1 >> v2;  //输入值

  std::cout << "The product of " << v1 * v2 << std::endl;  //输出值

  return 0;
}
