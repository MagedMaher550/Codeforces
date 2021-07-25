#include <iostream>

using namespace std;

int main()
{
    long n;
    int a , p , pMin , count = 0;
    cin>>n;

    for(int i=0; i<n; i++)
        {
            cin>>a>>p;
            if(i == 0)
                pMin = p;
            if(p >= pMin)
                p = pMin;
            else
                pMin = p;

            count += a * pMin;
        }

        cout<<count;
    return 0;
}
