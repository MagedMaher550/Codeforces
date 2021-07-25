#include <iostream>
#include <algorithm>

using namespace std;

bool AreSame(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main()
{
    string s1 , s2 , s3;
    cin>>s1>>s2>>s3;

    if(AreSame(s3,s1+s2))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
