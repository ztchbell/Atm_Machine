#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank
{

private:
    string name;
    int accnumber;

    int amount;
    int tot;

public:
    Bank()
    {
        name = "fetch from card"; // fetch from card
        accnumber = 0000000;      // fetch from card
        amount = 0;
        tot = 0;
    }

    // display the required data
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Account No:" << accnumber << endl;
        cout << "Balance:" << tot << endl;
    }

    // deposit the amount in ATM
    void deposit()
    {
        cout << "\nEnter amount to be Deposited\n";
    upr:
        cin >> amount;
        if (amount < 0)
        {
            cout << "enter the valid amount\n";
            goto upr;
        }
    }

    // show the balance amount
    void showbal()
    {
        tot = tot + amount;
        cout << "\nTotal balance is: " << tot;
    }

    // withdraw the amount in ATM
    void withdrawl()
    {
        if (tot > 0)
        {
            int a, avai_balance;
            cout << "Enter amount to withdraw\n";
            cin >> a;
            if (a <= tot)
            {
                avai_balance = tot - a;
                cout << "Available Balance is" << avai_balance;
            }
            else
            {
                cout << " failed !!!!!!! "
                     << "\tAvailable Balance is less than withdrawal amount";
            }
        }

        else
        {
            cout << "Available Balance is " << tot;
        }
    }
};

// Driver Code
int main()
{
    Bank b;
    int pass;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "~~~ NAMASTE SIR ~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
         << "~~~ WELCOME TO ATM MACHINE ~~~~~~~~~~~~~~~~~~"
         << "~~~~~~~~~\n\n";
    cout << "PLEASE INSERT YOUR CARD TO PROCEDE FURTHER";
    cout << "\n";
ttt:
    cout << "\nENTER 4 DIGIT CORRECT PIN\n";
    cin >> pass;
    if (pass == 1234)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        int choice;
        while (1)
        {

            cout << "\nEnter Your Choice\n";
            cout << "\t1. Account  Detail\n";
            cout << "\t2. Deposit Money\n";
            cout << "\t3. Show Total balance\n";
            cout << "\t4. Withdraw Money\n";
            cout << "\t5. Cancel\n";
            cin >> choice;

            switch (choice)
            {
            case 1:
                b.showdata();
                break;
            case 2:
                b.deposit();
                break;
            case 3:
                b.showbal();
                break;
            case 4:
                b.withdrawl();
                break;
            case 5:
                exit(1);
                break;
            default:
                cout << "\nInvalid choice\n";
            }
        }
    }
    else
    {
        cout << "INCORRECT PIN TRY AGAIN\n";
        goto ttt;
    }
    return 0;
}
