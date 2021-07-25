#include <iostream>

using namespace std;

int main()
{
        int n;
        cin>>n;

        int problems[n][3];

           for (int i = 0; i <n; i++)
          {
              for (int j = 0; j < 3; j++)
              {
                  cin>>problems[i][j];
              }
          }

        int count = 0 , p , v , t;

        for (int i=0; i<n; i++)
        {
            if((problems[i][0] ==1 && problems[i][1]==1) || (problems[i][0]==1 && problems[i][2]==1) || (problems[i][1]==1 && problems[i][2]==1))
            {
                count++;
            }
        }
        cout<<count;


    return 0;
}

