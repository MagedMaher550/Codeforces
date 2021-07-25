#include <iostream>

using namespace std;

int main()
{
    long n;
    cin>>n;

    for(int i=1; i<=n; i++)
        {
            if(n%i == 0)
                {
                    if(i >= n/i)
                        {
                            cout<<n/i<<" "<<i;
                            break;
                        }
                }
        }
    return 0;
}
