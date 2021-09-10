#include <iostream>
#include <string>
using namespace std;
/*
    stoi()  将数字字符串转换为 int类型。
    atoi()  区别与stoi() 该函数需要将字符串类型转换为char*类型
*/
int main()
{
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != 'E')
        i++;
    string t = s.substr(1, i - 1);
    int n = stoi(s.substr(i + 1));
    if (s[0] == '-')
        cout << "-";
    if (n < 0)
    {
        cout << "0.";
        for (int j = 1; j < abs(n); j++)
            cout << '0';
        for (int j = 0; j < i; j++)
            if (t[j] != '.')
                cout << t[j];
    }
    else
    {
        cout << t[0];
        int cnt, j;
        for (j = 2, cnt = 0; j < i && cnt < n; j++, cnt++)
            cout << t[j];
        if (j < i){
            cout << ".";
            for(;j<i;j++)
                cout<<t[j];
        }
        else{
            for (; cnt < n; cnt++)
                cout << '0';
        }
    }
}
