#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "enter no. 1 :" << endl;
    cin >> a;
    cout << "enter no. 2 :" << endl;
    cin >> b;
    cout << "enter no. 3 :" << endl;
    cin >> c;

    if (a > b)
    {

        if (a > c)
        {
            cout << a << endl;
            return 0;
        }
        else if (a < c)
        {
            cout << c << endl;
        }
    }

    if (b > a)
    {
        if (b > c)
        {
            cout << b << endl;
        }

        else if (c > b)
        {
            cout << c << endl;
        }
    }
    return 0;
}