#include<iostream>
using namespace std;
class BankAccount {
private:
    double balance;

public:
    BankAccount() 
    {
         balance = 0; 
        }
    void deposit(double amount)
     {
         balance += amount; 
        }
    void withdraw(double amount) {
         if (balance >= amount) 
                {balance -= amount;} 
        }
    double getBalance() 
    { 
        return balance; 
    }
};

int main()
{
    BankAccount b1;
    int amount;
    char method;
    cout<<"Enter 'd' to deposit or Enter 'w' to withdraw: ";
    cin>>method;
    if(method == 'd')
    {
        cout<<"Enter the amount to deposit: ";\
        cin>>amount;
        b1.deposit(amount);
        cout<<"Amount deposited succesfully\n";
        cout<<"Current balance is "<<b1.getBalance()<<endl;  
    }
    else if(method == 'w')
    {
        cout<<"Enter the amount to withdraw: ";\
        cin>>amount;
        if (b1.getBalance() >= amount) 
                {
                b1.withdraw(amount);
                cout<<"Amount withdrawn succesfully\n";
                }
        else
        {
            cout<<"Unsufficient balance."<<endl;
        }
        
        cout<<"Current balance is "<<b1.getBalance()<<endl;  
    }
    else
    {
        cout<<"please enter the correct word"<<endl;
    }
}


