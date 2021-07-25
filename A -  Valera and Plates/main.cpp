#include <iostream>
#define floop(i,a,b) for(int i=a; i<b; i++)

using namespace std;

int main()
{
    int n , cleanBowls , cleanPlates , wash = 0 , x;
    cin>>n>>cleanBowls>>cleanPlates;

    floop(i,0,n)
    {
        cin>>x;
        if(x == 1 && cleanBowls > 0)
            cleanBowls--;
        else if(x == 1 && cleanBowls == 0)
            wash++;

        else if(x == 2 && (cleanBowls > 0 || cleanPlates > 0))
                {
                    if(cleanPlates == 0)
                        cleanBowls--;
                    else
                        cleanPlates--;
                }
        else
            wash++;
    }
    cout<<wash;

    return 0;
}
