# include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"entre size of array";
    cin>>size;
    int array[size];
    bool flag = true;
    for(int idx = 0 ; idx < size; idx++)
    {
        cout<<"entre elements of array...";
        cin>>array[idx];
        if(array[idx] == 7 || array[idx] % 10 == 7)
        {
          flag = false  ;
        }
    }
    if(flag == true)
    {
        cout<<"number 7 does not appear";

    }
    else{
        cout<<"boom";
    }
}

