/* 练习1.16 编写程序，从cin读取一组数，输出其和。 */
#include <iostream>

int main()
{
  int sum = 0;
  int value;

  while(std::cin >> value)    //从cin读取一组数
  {
      sum += value;
  }

  std::cout << "Sum is:" << sum << std::endl;    //输出sum

  return 0;
}
