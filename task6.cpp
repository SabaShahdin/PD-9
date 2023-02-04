#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "entre the size of array..";
    cin >> size;
    int array[size];
    int number;
    cout << "entre number to which you want... ";
    cin >> number;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "entre elements of array..";
        cin >> array[idx];
    }
    for (int idx = 0; idx < size; idx++)
    {
        for (int count = 1; count <= number; count++)
        {
            if (array[idx] % 2 == 0)
            {
                array[idx] = array[idx] - 2;
            }
            else if (array[idx] % 2 != 0)
            {
                array[idx] = array[idx] + 2;
            }
        }
        cout << array[idx] << endl;
    }
}