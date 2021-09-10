#include <iostream>
using namespace std;
int main()
{
    int N;
    char label;
    cin >> N>>label;
    int sum = 1, num = 1;
    while (sum + (num + 2) * 2 <= N)
    {
        num += 2;
        sum += num * 2;
    }
    for(int i=num;i>=1;i-=2){
        for(int j=0;j<num-i;j+=2)
            cout<<" ";
        for(int j=0;j<i;j++)
            cout<<label;
        cout<<endl;
    } 
    for(int i=3;i<=num;i+=2){
        for(int j=0;j<num-i;j+=2)
            cout<<" ";
        for(int j=0;j<i;j++)
            cout<<label;
        cout<<endl;
    }
    cout<<N-sum;
}