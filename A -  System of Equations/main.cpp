#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int nn , mm , n , m , l , count = 0;
    cin>>nn>>mm;

     n = int(sqrt(nn));
     m = int(sqrt(mm));

    if(n >= m)
        l = n;
    else
        l = m;

        for(int i=0; i<=l; i++)
            {
                for(int j=0; j<=l; j++)
                    {
                        if( (i*i + j == nn) && (i + j*j == mm) )
                            count++;
                    }
            }

            cout<<count;
    return 0;
}
