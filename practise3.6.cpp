/*
  编写一段程序，使用范围for语句将字符串内的所有字符用 X 代替。
*/
#include <iostream>

using namespace std;
int main(void)
{
  string str = "Hello,world!";

  //遍历 str 将字符串内所有字符用 X 代替
  for(auto &c : str)
    c = 'X';

  cout << str << endl;

  return 0;
}
