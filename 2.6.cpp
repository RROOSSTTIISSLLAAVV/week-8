#include <iostream>
using namespace std;

int main()
{
    int c;
    int count = 0;
    cin >> c;


    while (true){
        if (c == 1) break;

        else if (c % 2 == 0)  c /= 2;

        else c = c * 3 + 1;

        count += 1;
    }

    cout << "count: " << count;
}
