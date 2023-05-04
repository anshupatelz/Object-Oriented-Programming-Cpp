/* Create a class called "BankAccount" that has a balance property and deposit and withdraw methods.
Use encapsulation to ensure that the balance property is not accessible outside the class. */

#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance = 0;
    string accountHolder;

public:
    BankAccount(string name)
    {
        accountHolder = name;
    }

    void deposit(int depositAmount)
    {
        balance += depositAmount;
        cout << "Thankyour, " << accountHolder << "! " << depositAmount << " rupees is deposit in your account successfully:)" << endl;
        cout << "And your current balance is : " << balance << endl;
    }

    void withdraw(int withdrawAmount)
    {
        if (balance >= withdrawAmount)
        {
            balance -= withdrawAmount;
            cout << "Thankyour, " << accountHolder << "! " << withdrawAmount << " rupees is withdrawal from your account successfully:)" << endl;
            cout << "And your current balance is : " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance in your account" << endl;
        }
    }
};

int main()
{
    BankAccount Anshu("Anshu");
    Anshu.deposit(100);
    Anshu.withdraw(30);
    return 0;
}

// Done