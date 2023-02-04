#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "entre size of array....";
    cin >> size;
    int timeToColor;
    int timeToSwitch;
    int result;
    int count = 0;
    string colour[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "entre colours ...";
        cin >> colour[idx];
    }
    for (int idx = 0; idx < size; idx++)
    {
        if (colour[0] != colour[idx])
        {
            count ++;
            colour[0] = colour[idx];
        }
    }
    timeToColor = size * 2;
    timeToSwitch = count ;
    result = timeToColor + timeToSwitch;
    cout << result;
}