#include <iostream>

using namespace std;

int main()
{
    int n , pCount = 0 , cCount = 0;;
    cin>>n;
    int events[n];

    for(int i=0; i<n; i++)
    {
        cin>>events[i];

        if(events[i] == -1)
        {
            if(pCount >0)
                pCount--;
            else
                cCount++;
        }
        else
            pCount += events[i];
    }
    cout<<cCount;

    return 0;
}
