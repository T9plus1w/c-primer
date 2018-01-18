/*
  编写一段程序从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词。
*/
#include <iostream>

using namespace std;
int main(void)
{
  string line;
  while(getline(cin,line))
  {
      cout << line << endl;
  }
  return 0;
}
