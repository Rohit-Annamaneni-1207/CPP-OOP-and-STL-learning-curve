#include <iostream>
using namespace std;

class market
{
    private:
        int item_id[100];
        int item_price[100];
        int counter;
    public:
        void count_reset()
        {
            counter=0;
        }
        void place_order();
        void display_cart();
};

void market :: place_order()
{
    cout<<"Enter the item id"<<endl;
    cin>>item_id[counter];
    cout<<"Enter the item price"<<endl;
    cin>>item_price[counter];
    counter++;
}

void market :: display_cart()
{
    int i,price_total=0;
    for (i=0;i<counter;i++)
    {
        cout<<"The price of the item with the id "<<item_id[i]<<" is "<<"Rs."<<item_price[i]<<endl;
        price_total+=item_price[i];
    }
    cout<<"Overall price of cart is "<<price_total<<endl;
}

int main()
{
    market reliance;
    reliance.count_reset();
    reliance.place_order();
    reliance.place_order();
    reliance.place_order();
    reliance.place_order();
    reliance.display_cart();
}
