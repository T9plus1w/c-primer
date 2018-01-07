/* 练习1.19 修改你为1.4.1节练习1.11所编写的程序（打印一个范围内的数），
   使其能处理用户输入的第一个数比第二个数小的情况。 */
#include <iostream>

int main(void)
{

  int v1,v2;

  //提示输入两个整数
  std::cout << "please input the two number:" << std::endl;
  std::cin >> v1 >> v2;  //获取两个整数

  //打印两个整数间的数字
  if(v1 > v2)    //v1 大于 v2
  {
    while(v1 >= v2)
    {
      std::cout << v1 <<std::endl;
      --v1;
    }
  }
  else    //v1 小于 v2
  {
    while(v1 <= v2)
    {
      std::cout << v1 <<std::endl;
      ++v1;
    }
  }


  return 0;
}
