#include <iostream>

using namespace std;

int main()
{
    int n , h , w = 0 , a;
    cin>>n>>h;

    for(int i=0; i<n; i++)
    {
        cin>>a;

        if(a <= h)
            w++;
        else
            w += 2;
    }
    cout<<w;

    return 0;
}
