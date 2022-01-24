#include <iostream>
using namespace std;

int main()
{
    int ch, b, l, r;
    float area;
    cout << "enter 1 for area of rec." << endl;
    cout << "enter 2 for aea of sq." << endl;
    cout << "enter 3 for area of circle" << endl;

    cin >> ch;

    if (ch == 1)
    {
        cout << "enter bredth of rec." << endl;
        cin >> b;
        cout << "enter length of rec." << endl;
        cin >> l;
        area = l * b;
        cout << "area of rec. is :" << area << endl;
    }

    else if (ch == 2)
    {
        cout << "enter side of a sq." << endl;
        cin >> l;
        area = l * l;
        cout << "area of sq.is:" << area << endl;
    }

    else if (ch == 3)
    {
        float g = 3.14;
        cout << "enter radii for area of circle" << endl;
        cin >> r;
        area = g * r * r;
        cout << "area of circle is:" << area << endl;
    }
    else
    {
        cout << " invalid choice" << endl;
    }
}
