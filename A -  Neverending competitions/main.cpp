#include <iostream>

using namespace std;

int main()
{
    int n , homeCount = 0 , contestCount = 0;
    string home , location;
    cin>>n>>home;

    for(int i=0; i<n; i++)
    {
        cin>>location;
        if(location.substr(5) == home)
            homeCount++;
        else
            contestCount++;
    }

    if(homeCount == contestCount)
        cout<<"home";
    else
        cout<<"contest";

    return 0;
}
