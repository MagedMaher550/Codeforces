#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a , b;
    cin>>a>>b;
    int p1=0 , p2=0 , d=0;

    for(int i=1; i<=6; i++)
        {
            if( abs(a-i) > abs(b-i) )
                p1++;
            else if(abs(a-i) < abs(b-i) )
                p2++;
            else
                d++;
        }
        cout<<p2<<" "<<d<<" "<<p1;
    return 0;
}
