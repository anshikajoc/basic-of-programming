#include <iostream>

using namespace std;

int main()
{
    int ch, n, m, p, add, sub, multiply, divi;
    cout << "enter 1 for add." << endl;
    cout << "enter 2 for sub." << endl;
    cout << "enter 3 for multiply." << endl;
    cout << "enter 4 for divi." << endl;
    /* cout<<"enter 5 for sq.root"<<endl;*/

    cin >> ch;

    if (ch == 1)
    {
        cout << "enter first no. :" << endl;
        cin >> n;
        cout << "enter second no. :" << endl;
        cin >> m;
        add = n + m;
        cout << "add. of no. is :" << add << endl;

        cout << "enter numbers" << endl;
        cin >> n >> m >> p;
        add = n + m + p;
        cout << "addition:" << add << endl;
    }

    if (ch == 2)
    {
        cout << "enter numbers" << endl;
        cin >> n >> m;
        sub = n - m;
        cout << "subtraction:" << sub << endl;
    }

    if (ch == 3)
    {
        cout << "enter numbers" << endl;
        cin >> n >> m;
        multiply = n * m;
        cout << "multipliction:" << multiply << endl;
    }

    if (ch == 4)
    {
        cout << "enter numbers" << endl;
        cin >> n >> m;
        divi = n / m;
        cout << "division:" << divi << endl;
    }

    /* if(ch==5){
      cout<<"enter a no."<<endl;
      cin>>n;
      sq.root= ;
      cout<<"sq. root:"<<sq.root<<endl;*/
}
