#include <iostream>

using namespace std;

int main()
{
    int n , k;
    cin>>n>>k;

    for(int i=n; i>=0; i--)
        {
            if(i+2*n <= k)
                {
                    cout<<n-i;
                    break;
                }
        }
    return 0;
}
