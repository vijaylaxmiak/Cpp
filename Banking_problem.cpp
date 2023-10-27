//Banking program that shows deposit,withdraw and balance
#include<iostream>
#include<iomanip>
using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main()
{
    double balance = 80;
    int choice = 0;
    do
    {
    cout<< "Enter your choice:\n";
    cout<< "1: Show balance\n";
    cout<< "2: Deposit money:\n";
    cout<< "3: Withdraw money\n";
    cout<< "4: Exit\n";
    cin >> choice;

    switch(choice)
    {
        case 1:showBalance(balance);
           break;
        case 2: balance += deposit();
                showBalance(balance);
           break; 
        case 3: balance -= withdraw(balance);
                showBalance(balance);
           break;
        case 4: cout<< "Thankyou for visiting!\n";
          break;
        default: cout<< "Invalid choice\n";
          break;

    }
    }while(choice!=4); 
    return 0;
    }
void showBalance(double balance)
{
    cout<<"Your balance is Rs "<<setprecision(2)<<fixed<< balance <<'\n';
}
double deposit()
{
    double amount=0;
    cout<< "Enter the amount to be deposited";
    cin>> amount;
    if(amount>0)
    {
      return amount;
    }
    else{
        cout<< "Thats not a valid amount\n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount = 0;
    cout<< "Enter the amount to withdraw\n";
    cin>> amount;

    if(amount> balance)
    {
        cout<< "Insufficient funds!\n";
        return 0;
    }
    else if (amount< 0)
    {
        cout<< "Thats not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}
