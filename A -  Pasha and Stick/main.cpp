#include <iostream>

using namespace std;

int main()
{
    long n;
    cin>>n;

    if(n%2 == 1)
        cout<<0;
    else
        {
            long m = n/2;
            if(m%2 == 0)
                m--;

            cout<<m/2;
        }

    return 0;
}
