#include <iostream>

using namespace std;
//A. Compote

int main()
{
    int a , b , c;
    cin>>a>>b>>c;

    while(a >= 0)
        {
            if(b-2*a >= 0 && c-4*a >= 0)
                {
                    cout<<7*a;
                    break;
                }
            else
                a--;
        }
    return 0;
}
