#include <iostream>

using namespace std;

int main()
{
        int n , m , k = 0;
        cin>>n>>m;

        for(int i=0; i<n; i++)
            if(i%m == 0)
                n++;

        cout<<n-1;

    return 0;
}
