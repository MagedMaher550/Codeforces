#include <iostream>

using namespace std;

int main()
{
    string s , t;
    cin>>s>>t;

    int move1 = 0 , move2 = 0 ,count = 0;

    for(int i=0; i<=t.length(); i++)
        {
            if(s[count] == t[i])
                count++;
        }

        cout<<count+1;
    return 0;
}

