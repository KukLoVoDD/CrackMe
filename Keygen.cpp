#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    cout << "Name: ";
    cin >> a;

    int r = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] < 'A')
        {
            cout << "Incorrect arguments" << endl; // при побитовом или со сдвигом испольхуется с A-Z
            return 0;
        }
        if (a[i] >= 'Z') a[i] -= 0x20; // свдиг на 20h
        r += a[i];
    }

    r ^= 0x5678;
    r ^= 0x1234;
    cout << "Serial: " << r << endl;

    return 0;
}
