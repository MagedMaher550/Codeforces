#include <iostream>

using namespace std;

int main()
{
    long n , m , z , count = 0 , G , S;
    cin>>n>>m>>z;

    if( (n == m && n == z))
        cout<<1;

    else
        {
            if(n > m)
                {
                    G = n;
                    S = m;
                }
            else
                {
                    G = m;
                    S = n;
                }

            for(long i=S; i<=z; i += S)
                {
                    if( i%G == 0 )
                        count++;
                }

            cout<<count;
        }

    return 0;
}
