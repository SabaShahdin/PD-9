# include<iostream>
using namespace std;
main()
{
    string fruit [4] = {"peach" , "apple" , "guava" , "watermelon"};
    int price [4] = { 60 , 70 , 40 , 30} ;
    int priceOfFruit;
    string fruitName;
    int quantity;
    cout<<"entre quantity of the fruits...";
    cin>>quantity;
    cout<<"entre fruit name... ";
    cin>>fruitName;
    int count ;
    for(int idx = 0; idx < 4 ; idx ++)
    {
         if(fruit[idx] == fruitName)
         {
            count = idx;
         }
    }
        priceOfFruit = price[count] *  quantity;
        cout<<priceOfFruit;
}



    
