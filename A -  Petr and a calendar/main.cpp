#include <iostream>

using namespace std;

int main()
{
    int m , d;
    cin>>m>>d;

    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout<<( month[m-1] + (d-1) + 6) / 7;
    return 0;
}
