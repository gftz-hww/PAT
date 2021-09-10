#include <iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char a[81], b[81];
    char temp[81];
    int accii[200];
    int i, j, index;
    cin >> a;
    cin >> b;
    i = j = index = 0;
    while (a[i] != '\0')
    {
        if (toupper(a[i]) != toupper(b[j]))
        {
            if(a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] = toupper(a[i]);
            }
            if (accii[int(a[i])] != 1)
            {
                temp[index++] = a[i];
                accii[int(a[i])] = 1;
            }
            i++;
            continue;
        }
        i++;
        j++;
        
    }
    for (i = 0; i < index; i++)
    {
        cout << temp[i];
    }
}