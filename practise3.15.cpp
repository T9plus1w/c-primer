/*
  编写一段程序，用cin读入一组整数并把它们存入一个vector对象。
*/
#include <iostream>
#include <vector>

using namespace std;
using std::vector;    //使用vector必须包含头文件vector

int main(void)
{
  vector<string> number;
  string c;

  //读入一串字符串，压入容器中
  while(cin >> c)
  {
      number.push_back(c);
  }

  //从容器中读取全部数据
  for(auto i : number)
      cout << i << " ";
  cout << endl;

  return 0;
}
