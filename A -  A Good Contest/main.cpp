#include<iostream>
#include<stdio.h>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string tmp1 , tmp2;
    int x , y , a , b;
    bool check = false;

    for(int i=0; i<=n; i++)
        {
            char ss[25];
            gets(ss);
            string s(ss);

            int x = s.find(' ');
            tmp1 = s.substr(x+1);

            int y = tmp1.find(' ');
            tmp2 = tmp1.substr(y+1);

            tmp1 = tmp1.substr(0,y);

            stringstream aa(tmp1);
            int a = 0;
            aa >> a;
            stringstream bb(tmp2);
            int b = 0;
            bb >> b;

            if(a >= 2400 && b > a)
                check = true;
        }

        if(!check)
            cout<<"NO";
        else
            cout<<"YES";

    return 0;
}
