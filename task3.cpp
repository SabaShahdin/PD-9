# include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"entre any word..";
    getline(cin , word);
    int idx =0;
    while(word[idx]!= '\0')
    {
      idx = idx +1;
    }
     if(idx % 2 == 0)
     {
        cout<<"true";
     }
     else 
     {
        cout<<"false";
     }
}