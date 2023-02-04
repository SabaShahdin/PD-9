# include<iostream>
using namespace std;
main()
{
    string movieName;
    string movie[5] = {"gladiator" , "starwar", "terminator" , " taking lives" ,"tombrider"};
    int priceOFTicket = 500;
    cout<<"entre movie name  ";
    cin>>movieName;
    int discount;
    int count;
    for(int idx= 0 ; idx <5 ; idx++)
    {
        if(movieName == movie[idx])
        {
            count = idx;
        }
}
 if( count % 2 != 0)
    {
       discount =  500 * 0.5;
       cout<<discount<<endl;
    }
    else
    {
       discount = 500 * 0.10;
       cout<<discount<<endl;
    }
}