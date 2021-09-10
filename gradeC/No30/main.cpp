#include <iostream>
using namespace std;
int main()
{
    long long M = 0, p, m = 999999999;
    long long temp[100001];
    int n, sum = 0;
    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
        if (temp[i] < m)
        {
            m = temp[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(M<temp[i]){
            if(M<=n*p){
                
            }
        }
    }
}