#include <iostream>
#define floop(i,a,b) for(int i=a; i>=b; i--)

using namespace std;

int main()
{
    string n;
    cin>>n;

    string sor[] =
    {
        "O-|-OOOO",
        "O-|O-OOO",
        "O-|OO-OO",
        "O-|OOO-O",
        "O-|OOOO-",
        "-O|-OOOO",
        "-O|O-OOO",
        "-O|OO-OO",
        "-O|OOO-O",
        "-O|OOOO-"
    };

        floop(i,n.length()-1,0)
            cout<<sor[n[i] - 48]<<endl;

    return 0;
}
