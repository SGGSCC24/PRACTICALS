/*
To find bill of a company.

Code By: Om Gupta 214047
*/

#include<iostream>
#include<iomanip>
#define SALES_TAX 8.25
#define PRICE_TV 400.00
#define PRICE_VCR 220.00
#define PRICE_RC 35.20
#define PRICE_CD 300.00
#define PRICE_TR 150.00
using namespace std;

int main(){
    int qty_TV, qty_VCR, qty_RC,qty_CD, qty_TR = 0;

    // Taking Inputs
    cout<<"How Many TVs Were Sold? ";
    cin>>qty_TV;
    cout<<"How Many VCRs Were Sold? ";
    cin>>qty_VCR;
    cout<<"How Many Remote Controllers Were Sold? ";
    cin>>qty_RC;
    cout<<"How Many CDs Were Sold? ";
    cin>>qty_CD;
    cout<<"How Many Tape Recorders Were Sold? ";
    cin>>qty_TR;

    // Displaying Headings
    cout<<endl<<"QTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE";
    cout<<endl<<"___\t___________\t__________\t___________";

    // Displaying complete Bill
    cout<<fixed<<setprecision(2);
    cout<<endl<<setw(8)<<left<<qty_TV<<setw(15)<<"TV"<<setw(11)<<right<<PRICE_TV<<setw(17)<<PRICE_TV*qty_TV;
    cout<<endl<<setw(8)<<left<<qty_VCR<<setw(15)<<"VCR"<<setw(11)<<right<<PRICE_VCR<<setw(17)<<PRICE_VCR*qty_VCR;
    cout<<endl<<setw(8)<<left<<qty_RC<<setw(15)<<"REMOTE CTRLR"<<setw(11)<<right<<PRICE_RC<<setw(17)<<PRICE_RC*qty_RC;
    cout<<endl<<setw(8)<<left<<qty_CD<<setw(15)<<"CD PLAYER"<<setw(11)<<right<<PRICE_CD<<setw(17)<<PRICE_CD*qty_CD;
    cout<<endl<<setw(8)<<left<<qty_TR<<setw(15)<<"TAPE RECORDER"<<setw(11)<<right<<PRICE_TR<<setw(17)<<PRICE_TR*qty_TR;
    
    float subtotal = PRICE_TV*qty_TV + PRICE_VCR*qty_VCR + PRICE_RC*qty_RC + PRICE_CD*qty_CD + PRICE_TR*qty_TR;
    float salestax = (SALES_TAX/100)*subtotal;

    cout<<endl<<"\t\t\t"<<setw(9)<<left<<"SUBTOTAL"<<setw(18)<<right<<subtotal;
    cout<<endl<<"\t\t\t"<<setw(9)<<left<<"TAX"<<setw(18)<<right<<salestax;
    cout<<endl<<"\t\t\t"<<setw(9)<<left<<"TOTAL"<<setw(18)<<right<<subtotal+salestax;

    return 0;
}