#include <iostream>

using namespace std;

int main()
{
    int n , m , a , b , res = 0;
    cin>>n>>m;

    for(int i=0; i<n*m; i++)
    {
        cin>>a>>b;
        if(a == 1 || b == 1)
            res++;
    }
    cout<<res;
    return 0;
}
