#include <iostream>
#include <NTL/ZZ.h>
using namespace std;
using namespace NTL;

int main()
{
    ZZ a = conv<ZZ>("18446744073709551615");
    cout << "\n a ::" << a << endl;
    a++;
    cout << "\n a::" << a << endl;
    for (int i = 0; i < 8; i++)
    {
        a *= a;
        cout << "\n a::" << a << endl;
    }
    return 0;
}
