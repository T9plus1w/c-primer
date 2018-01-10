/* 编写程序，读取多条销售纪录，并统计每个 ISBN （每本书）有几条销售纪录。 */
#include <iostream>
#include "Sales_item.h"

int main(void)
{
  Sales_item item,temp;
  int count = 0;

  //判断是否有数据，并纪录第一个数据
  if(std::cin >> temp)
  {
    count = 1;
    while (std::cin >> item)    //重复读取数据
    {
      if(item.isbn() == temp.isbn())  //统计相同的ISBN数据
      {
        ++count;
      }
      else  //否则打印数据,并重置temp与count
      {
        std::cout << temp.isbn()<< " count is: " << count << std::endl;
        temp = item;
        count = 1;
      }
    }
    std::cout << temp.isbn() << " count is: " << count << std::endl;
  }
  else
  {
      std::cout << " warning! " << std::endl;
      return 0;
  }
}
