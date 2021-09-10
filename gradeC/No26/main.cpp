#include <iostream>
using namespace std;
int main()
{
    long long l_first, l_end;
    double d_first, d_end;
    cin >> l_first >> l_end;
    d_first = l_first / 100.0;
    d_end = l_end / 100.0;
    l_first = long(d_first + 0.5);
    l_end = long(d_end + 0.5);
    long long sum = long(d_end - d_first+0.5);
    int h, m, s;
    h = sum / 3600;
    sum %= 3600;
    m = sum / 60;
    sum %= 60;
    printf("%02d:%02d:%02d",h,m,sum);
}