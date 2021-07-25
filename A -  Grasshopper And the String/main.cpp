#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int jump , max = 0 , index = -1;

    for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            index = i;

            jump = i - index;
            if(max < jump)
                max = jump;
        }
        cout<<max+1;

    return 0;
}
