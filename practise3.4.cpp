/*
  编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个
字符串。改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个
字符串。
*/
#include <iostream>

using namespace std;
int main(void)
{
  string line1;
  string line2;

  getline(cin,line1);
  getline(cin,line2);

  if(line1 == line2)
      cout << "相等" << endl;
  else
  {
      //改写程序代码写入下方
      if(line1 > line2)
          cout << line1 << endl;
      else
          cout << line2 << endl;
  }

  return 0;
}


//改写上述程序，添加进else
/*
    if(line1.size() > line2.size())
        cout << line1 << endl;
    else
        cout << line2 << endl;
*/
