#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
class bank
{
    char name[100],add[100],y;
    int balance;
    public:
        void open_account();
        void deposite_money();
        void withdraw_money();
        void Display_account();
};
void bank :: open_account() {
    cout <<"enter your full name :: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"enter your address :: ";
    cin.ignore();
    cin.getline(add,100);
    cout<<"what type of account(s/c) :: ";
    cin>>y;
    cout<<"enter amount for deposition :: ";
    cin>>balance;
    cout<<"your account is created";
}
void bank :: deposite_money() {
    int a;
    cout<<"enter how much you deposite :: ";
    cin>>a;
    balance+=a;
    cout<<"total amount you deposite :: \t "<<balance;
}
void bank :: Display_account() {
    cout<<"your full name :: \t"<<name;
    cout<<"your address :: \t"<<add;
    cout<<"type of account(s/c) :: \t"<<y;
    cout<<"amount you deposited :: \t"<<balance;
}
void bank :: withdraw_money() {
    float amount;
    cout<<"\n withdraw :: ";
    cout<<"enter amount to withdraw :: ";
    cin>>amount;
    if(amount>balance) {
        cout<<"Insufficient balance";
         exit(0);
    }
    balance= balance-amount;
    cout<<"now total amount left is :: "<<balance;

}
int main() {
    int ch;
    char x;
    bank obj;
    do {
        cout<<"1) OPEN ACCOUNT \n";
        cout<<"2) DEPOSITE MONEY \n";
        cout<<"3) WITHDRAW MONEY \n";
        cout<<"4) DISPLAY ACCOUNT \n";
        cout<<"5) EXIT"<<endl;
        cout<<"select the option from above \n";
        cin>>ch;
        switch(ch) {
            case 1:"1) open account \n";
            obj.open_account();
            break;
            case 2:"2) deposit money \n";
            obj.deposite_money();
            break;
            case 3:"3) withdraw money:   \n";
            obj.withdraw_money();
            break;
            case 4:"4) display account \n";
            obj.Display_account();
            break;
            case 5:
                if(ch==5) {
                    exit(1);
                }
            default:
                cout<<"this is not valid, try again \n";
        }
        cout<<"\n do you want to select next option the press :: y\n";
        cout<<"if you want to exit, then press :: N"<<endl;
       cin>>x;
        if(x=='n' || x=='N')
        exit(0);
        }while(x== 'y' || x=='Y');
        return 0;
    }
