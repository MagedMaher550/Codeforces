#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int count , i = 0 , j;
    vector<int> groups;

    while(i < s.length())
        {
            j = i;
            count = 0;
            while(j < s.length() && s[i] == s[j])
                {
                    count++;
                    j++;
                }
            if(s[i] == 'B')
                groups.push_back(count);

            i = j;
        }

        cout<<groups.size()<<endl;
        printVector(groups);

    return 0;
}
