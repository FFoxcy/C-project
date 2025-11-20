#include <iostream>
using namespace std;

int main()
{
    cout<<"--------- SISTEM REKOD MARKAH KUIZ PELAJAR ---------\n\n";

    int QUIZMARK[3][4];
    for(int a=0;a<3;a++){
        cout<<"Sila masukkan markah kuiz bagi pelajar "<<a+1<<endl;
        for(int b=0;b<4;b++){
            cout<<"Kuiz "<<b+1<<": ";
            cin>>QUIZMARK[a][b];
        }
        cout<<endl;
    }

    cout<<"--------- KEPUTUSAN KUIZ PELAJAR ---------\n\n";

    for(int i=0;i<3;i++){
        int jumlah = 0;
        cout<<"Markah Pelajar "<<i+1<<" (Markah Kuiz: ";
        for(int j=0;j<4;j++){
            cout<<QUIZMARK[i][j];
            jumlah += QUIZMARK[i][j];
            if(j<3) cout<<", ";
        }
        cout<<")";
        float purata = jumlah / 4.0;
        cout<<"Jumlah Markah Kuiz: "<< jumlah <<endl;
        cout<<"Purata Markah Kuiz: "<< purata <<"\n\n";
    }
    return 0;
}
