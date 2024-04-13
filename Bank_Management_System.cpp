#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class bank
{
private:
    char name[900], add[900];
    string y;
    int balance;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void bank ::open_account()
{
    cout << "Enter your full name :: ";
    cin.ignore();
    cin.getline(name, 100);

    cout << "\nEnter your address :: ";
    cin.getline(add, 100);

    cout << "\nWhich type of account you want to open Saving (s) or current (c) :: ";
    cin >> y;

    cout << "\nEnter amount for deposit :: ";
    cin >> balance;

    cout << "\nYour account is created successfully :: ";
}

void bank ::display_account()
{
    cout << "Your full name :: " << name;
    cout << "\nYour address :: " << add;
    cout << "\nType of account that you open :: " << y;
    cout << "\nInitial amount you deposit :: " << balance;
}

void bank ::deposit_money()
{
    int a;
    cout << "Enter amount you want to deposit ::";
    cin >> a;
    balance += a;
    cout << "\nTotal amount you deposit ::" << balance;
}

void bank ::withdraw_money()
{
    float amount;
    cout << "Enter how much amount you want to withdraw :: ";
    cin >> amount;
    balance -= amount;
    cout << "\nNow total total amount left :: " << balance;
}

int main()
{
    int ch;
    bank obj;
    char x;
    do
    {
        cout << "1) Open account \n";
        cout << "2) Deposit money \n";
        cout << "3) Withdraw money \n";
        cout << "4) Display account \n";
        cout << "5) Exit \n";
        cout << "6) Select the option from above \n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "1) Open account \n";
            obj.open_account();
            break;
        case 2:
            cout << "2) Deposit money \n";
            obj.deposit_money();
            break;
        case 3:
            cout << "3) Withdraw money \n";
            obj.withdraw_money();
            break;
        case 4:
            cout << "4) Display account \n\n";
            obj.display_account();
            break;
        case 5:
            exit(1);

        default:
            cout << "This option is not exist try again ";
        }

        cout << "\nDo you want to select next option then press :: Y ";
        cout << "\nIf you want to exit then press :: N ] ";

        cin >> x;
        if (x == 'n' || x == 'N')
        {
            exit(0);
        }
    } while (x == 'y' || x == 'Y');

    return 0;
}
