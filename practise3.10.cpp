/*
  编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。
*/
#include <iostream>

using namespace std;
int main(void)
{
  string str = "Hello,world!";
  string line;

  //遍历字符串将标点符号去除
  for(auto c : str)
  {
      if(!ispunct(c)) 
        line += c;
  }

  cout << line << endl;

  return 0;
}
