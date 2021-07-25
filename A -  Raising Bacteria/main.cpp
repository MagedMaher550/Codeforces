#include <iostream>

using namespace std;

int main()
{
    long n;
    cin>>n;
    long count = 0;

    while(n)
        {
            count += n%2;
            n /= 2;
        }

        cout<<count;

    return 0;
}
