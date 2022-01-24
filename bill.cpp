#include <iostream>
using namespace std;
int main()
{
    //electricity bill

    int u, bill;
    cout << "enter the unit for bill :" << endl;
    cin >> u;

    if (u <= 1000)
    {

        bill = u * 5;
        cout << "your bill is :" << bill << endl;
    }
    else if (u > 1000 && u <= 2000)
    {

        bill = u * 6;
        cout << "your bill is :" << bill << endl;
    }
    else if (u > 2000)
    {

        bill = u * 7;
        cout << "your bill is :" << bill << endl;
    }
}