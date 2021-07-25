#include <iostream>

using namespace std;

int main()
{
        long n , c , count = 1;
        cin>>n>>c;

        long words[n];
        cin>>words[0];

        for(int i=1; i<n; i++)
        {
            cin>>words[i];

              if(words[i] - words[i-1] > c)
                   count = 1;
              else
                   count++;
        }

        cout<<count;

    return 0;
}
