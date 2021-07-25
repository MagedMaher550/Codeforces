#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int toInt(string s)
{
    int number;
    istringstream iss (s);
    iss >> number;

    return number;
}

string toString(int x)
{
    string s;
    stringstream ss;
    ss << x;
    s = ss.str();
    return s;
}

int main()
{
    int current_hours , current_minutes , sleep_hours , sleep_minutes , res_hours , res_minutes;

    string current , sleep , resHours , resMinutes;
    cin>>current>>sleep;

    current_hours   = toInt(current.substr(0,2));
    current_minutes = toInt(current.substr(3));
    sleep_hours     = toInt(sleep.substr(0,2));
    sleep_minutes   = toInt(sleep.substr(3));

    res_hours = current_hours - sleep_hours;
    res_minutes = current_minutes - sleep_minutes;

    if(res_hours < 0)
        res_hours = 24 + res_hours;

    if(res_minutes < 0)
        {
            res_hours--;
            res_minutes = 60 + res_minutes;

            if(res_hours < 0)
                res_hours = 24 + res_hours;
        }

    resHours = toString(res_hours);
    resMinutes = toString(res_minutes);

    if(resHours.length() < 2)
        resHours = '0' + toString(res_hours);

    if(resMinutes.length() < 2)
        resMinutes = '0' + toString(res_minutes);

    cout<<resHours + ':' + resMinutes;
    return 0;
}
