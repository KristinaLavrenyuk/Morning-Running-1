
#include <iostream>
using namespace std;

int main()
{
    float x, y;
    int i;
    cin >> x >> y;

    for (i = 1; x < y; i++)
    {
        if (x == 0) break;
        x += x * 0.7;
    }
    cout << i;
    //system("pause");
}
