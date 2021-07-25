#include <iostream>

using namespace std;

int main()
{
    int n , k , x , num = 0;
    cin>>n>>k;
    int participants[n];

    for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x + k <= 5)
                num++;
        }

    cout<<num/3;
    return 0;
}
