/* 练习1.11 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的
   所有整数。 */
#include <iostream>

int main(void)
{

  int v1,v2;

  //提示输入两个整数
  std::cout << "please input the two number:" << std::endl;
  std::cin >> v1 >> v2;  //获取两个整数

  //打印两个整数间的数字
  while(v1 <= v2)
  {
      std::cout << v1 <<std::endl;
      ++v1;
  }
  return 0;
}
