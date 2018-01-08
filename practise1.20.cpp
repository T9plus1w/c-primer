/* 练习1.20 在网站http : // 上，第一章的代码目录中包含了头文件Sales_item.h。
    将它拷贝到你自己的工作目录中。用它编写一个程序，读取一组书籍销售纪录，将每条
    纪录打印到标准输出上。 */

#include <iostream>
#include "Sales_item.h"

int main(void)
{
  Sales_item item;

  while(std::cin >> item)
  {
    std::cout << " item is: " << item << std::endl;
  }

  return 0;
}
