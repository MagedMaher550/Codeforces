#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long nums[n];

    for(int i=0; i<n; i++)
        cin>>nums[i];

    for(int i=0; i<n-1; i++)
        cout<<nums[i]+nums[i+1]<<" ";

    cout<<nums[n-1];
    return 0;
}
