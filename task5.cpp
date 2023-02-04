#include <iostream>
using namespace std;
main()
{
    int idx = 0;
    bool flag = false;
    string array[4];
     
    for (int idx = 0; idx < 4; idx = idx + 1)
    {
        cout << "entre elements of arary...";
        cin >> array[idx];
    }
        for (int count = 1; count < 4 ; count++)
        {
            if (array[0] == array[count])
            {
                flag = true;
            }
            if(array[0] != array[count])
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }

