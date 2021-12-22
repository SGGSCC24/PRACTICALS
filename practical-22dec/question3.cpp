#include<iostream>
using namespace std;
int main()
{
    int quantity;
    float a , b, unit_price ,discount, sale, total_sale, tax=8.5;
    cout<<"Enter the items sold: \n";
    cin>>quantity;
    cout<<"Enter the price: \n";
    cin>>unit_price;
    cout<<"Enter the discount: \n" ;
    cin>>discount;
    sale=(unit_price*quantity);
    a=discount/100;
    b=tax/100;
    total_sale=(sale - (sale*a));
    total_sale=(total_sale + (total_sale*b));
    cout<<"Total sale:"<<total_sale;
    return 0;

}
