#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%2 == 1)
            cout<<-1;

    else
        {
            for(int i=0; i<n/2; i++)
                {
                    cout<<i*2+2<<" "<<i*2+1<<" ";
                }
        }
    return 0;
}
