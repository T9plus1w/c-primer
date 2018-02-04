/*
  从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改写为大写形式。
输出改变后的结果，每个词占一行。
*/
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;
using std::vector;

int main(void)
{
    vector<string> v;
    string i;
    
    //读取字符串写入vector
    while(cin >> i)
    {
      v.push_back(i);
    }

    cout << "原字符串" <<endl;
    for(auto x : v)
      cout << x <<endl;

    //将所有词都改写为大写形式
    for(int i = 0;i < v.size();i++)
    {
        for(int j = 0;v[i][j] != '\0';j++)
        {
            v[i][j] = toupper(v[i][j]);
        }
        cout << endl;
    }

    cout << "大写字符串" <<endl;
    for(auto x : v)
      cout << x <<endl;

    return 0;
}
