#include <iostream>

using namespace std;

int main()
{

    long n , Anton = 0 , Danik = 0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'A')
                Anton++;
            else
                Danik++;
        }

    if(Anton > Danik)
        cout<<"Anton";
    else if(Anton < Danik)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}
