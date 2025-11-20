#include <iostream>
using namespace std;

void apple(){
    int i;
    int p=3;
    cout << "Enter amount: ";
    cin >> i;
    cout << "You selected " << i << " apple(s).\n";
    cout<<"Total price = RM"<<i*p<<"\n";
}
void orange(){
    int i,p=4;
    cout << "Enter amount: ";
    cin >> i;
    cout << "You selected " << i << " orange(s).\n";
    cout<<"Total price = RM"<<i*p<<"\n";
}
void mango(){
    int i,p=4;
    cout << "Enter amount: ";
    cin >> i;
    cout << "You selected " << i << " mango(s).\n";
    cout<<"Total price = RM"<<i*p<<"\n";}

int main() {   
    char a = 'y';
    while(a == 'y' || a == 'Y') {
        int choice;
        cout << "------------------------------\n";
        cout << "\t FoxVend\n";
        cout << "------------------------------\n";
        cout << "1) Apple  (RM3)\n2) Orange (RM4)\n3) Mango  (RM4)\n";
        cout << "------------------------------\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                apple();
                break;
            case 2:
                orange();
                break;
            case 3:
                mango();
                break;
            default:
                cout << "Invalid choice.\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> a;
        cout<<"\n";
    }

    cout << "Thank you for using FoxVend!\n";
    return 0;
}
