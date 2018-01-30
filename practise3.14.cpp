/*
  编写一段程序，用cin读入一组整数并把它们存入一个vector对象。
*/
#include <iostream>
#include <vector>

using namespace std;
using std::vector;    //使用vector必须包含头文件vector

int main(void)
{
  vector<int> number;
  int c;
  int count = 0;

  //读入一串整数，压入容器中
  while(cin >> c)
  {
      number.push_back(c);
      count++;
  }

  //从容器中读取全部数据
  for(auto i : number)
      cout << i << " ";
  cout << endl;
  
  return 0;
}
