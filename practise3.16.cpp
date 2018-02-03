/*
    编写一段程序，把练习3.13中vector对象的容量和具体内容输出出来。检验你之前的回答
是否正确，如果不对，回过头重新学习3.3.1节直到弄明白错在何处为止。
*/
#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main(void)
{
  vector<int> v1;
  cout << "v1" << endl;
  for(auto i : v1)
      cout << i <<" ";
  cout << endl;

  vector<int> v2(10);
  cout << "v2" << endl;
  for(auto i : v2)
      cout << i <<" ";
  cout << endl;

  vector<int> v3(10,42);
  cout << "v3" << endl;
  for(auto i : v3)
      cout << i <<" ";
  cout << endl;

  vector<int> v4{10};
  cout << "v4" << endl;
  for(auto i : v4)
      cout << i <<" ";
  cout << endl;

  vector<int> v5{10,42};
  cout << "v5" << endl;
  for(auto i : v5)
      cout << i <<" ";
  cout << endl;

  vector<string> v6{10};
  cout << "v6" << endl;
  for(auto i : v6)
      cout << i <<" ";
  cout << endl;

  vector<string> v7{10,"hi"};
  cout << "v7" << endl;
  for(auto i : v7)
      cout << i <<" ";
  cout << endl;
  
  return 0;
}
