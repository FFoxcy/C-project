#include <iostream>
using namespace std;

int main()
{
    int ID, Day;
    cout<<"********** WELCOME TO PUOPETROL STATION **********\n";
    cout<<"Enter Worker ID : ";
    cin>>ID;
    cout<<"Enter number of days : ";
    cin>>Day;

    int sales[Day];
    int maxSales, minSales;

    for(int i=0;i<Day;i++){
        cout<<"Enter sales amount for day "<<i+1<<": ";
        cin>>sales[i];
        if(i==0){
            maxSales = sales[i];
            minSales = sales[i];
        }
        else {
            if(sales[i] > maxSales) maxSales = sales[i];
            if(sales[i] < minSales) minSales = sales[i];
        }
    }

    cout<<endl;

    cout<<"********** PUOPETROL STATION ***************\n";
    cout<<"Worker ID : "<<ID<<endl;
    cout<<"Maximum sales : RM"<<maxSales<<endl;
    cout<<"Minimum sales : RM"<<minSales<<endl;
    cout<<"********** THANK YOU ***************\n";

    return 0;
}
