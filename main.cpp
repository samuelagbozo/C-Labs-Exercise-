#include <iostream>
#include <string>

using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    protected:
        string ownerName;
    public:

        void deposit(double amount){
            balance = balance+amount;
        }
        bool withdraw(double amount){
            if(amount<=balance){
                balance = balance - amount
                return true;
            }
            return false;

        }
        double getBalance(){return balance;}


};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
