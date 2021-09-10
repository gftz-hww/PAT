#include <iostream>
#include <string>
using namespace std;
bool compare(string a, string b)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (int(a[i]) > int(b[i]))
            return true;
        if (int(a[i]) < int(b[i]))
            return false;
    }
    return true;
}

int main()
{
    int N;
    int num = 0;
    bool flag = true;
    string name;
    string birth;
    string maxName, minName;
    string maxBirth, minBirth;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> name >> birth;
        if (compare("2014/09/06", birth) && compare(birth, "1814/09/06"))
        {
            if (flag)
            {
                maxName = minName = name;
                maxBirth = minBirth = birth;
                flag = false;
            }
            else
            {
                if (compare(minBirth, birth))
                {
                    minBirth = birth;
                    minName = name;
                }
                else if (compare(birth, maxBirth))
                {
                    maxBirth = birth;
                    maxName = name;
                }
            }
            num++;    
        }
    }
    cout << num << " " << minName << " " << maxName;
}