#include <iostream>
using namespace std;

int main()
{
    cout << "    1 2 3 4 5 6 7 8 9 10  " << endl;
    cout << "--------------------------" << endl;
    for (int a = 1; a <= 10; a++)
    {
        cout << a << " | ";
        for (int b = 1; b <= 10; b++)
        {
            cout << a * b << " ";
        }
        cout << " " << endl;
    }

    return 0;
}
