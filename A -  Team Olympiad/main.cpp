#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n , x;
    cin>>n;

    vector<int> a , b , c;

    for(int i=0; i<n; i++)
        {
            cin>>x;
            switch(x)
            {
                case 1:
                    a.push_back(i+1);
                    break;
                case 2:
                    b.push_back(i+1);
                    break;
                case 3:
                    c.push_back(i+1);
                    break;
                default:
                    break;
            }
        }

        if(a.empty() || b.empty() || c.empty())
            cout<<0;

        else if (a.size() <= b.size() && a.size() <= c.size())
        {
                cout<<a.size()<<endl;
                for(int i=0; i<a.size(); i++)
                    cout<<a.at(i)<<" "<<b.at(i)<<" "<<c.at(i)<<endl;
        }

        else if (b.size() <= a.size() && b.size() <= c.size())
        {
                cout<<b.size()<<endl;

                for(int i=0; i<b.size(); i++)
                    cout<<a.at(i)<<" "<<b.at(i)<<" "<<c.at(i)<<endl;
        }

        else if (c.size() <= a.size() && c.size() <= b.size())
        {
                cout<<c.size()<<endl;
                for(int i=0; i<c.size(); i++)
                    cout<<a.at(i)<<" "<<b.at(i)<<" "<<c.at(i)<<endl;
        }



    return 0;
}
