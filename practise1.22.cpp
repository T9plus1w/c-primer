/* 编写程序，读取多个具有相同 ISBN 的销售纪录，输出所有纪录的和。 */
#include <iostream>
#include "Sales_item.h"

int main(void)
{
  Sales_item sum,item;

  if(std::cin >> sum)
  {
    while(std::cin >> item)
    {
        sum += item;
    }
  }
  else
  {
    std::cout << "warning!" << std::endl;
  }
  std::cout << sum << std::endl;
  
  return 0;
}
