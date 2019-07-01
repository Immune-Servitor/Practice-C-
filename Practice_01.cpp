/*
    (Problem taken from C++ for Everyone, 2nd Edition, by Cay S. Horstmann)

    A bank account starts out with $10,000. Interest is compounded monthly at 6% per year
    (.5% per month). Every month, $500 is withdrawn to meet college expenses.
    After how many years is the account depleted?

    Breakdown: We want to create an algorithm for an account that is receiving a certain
    amount of interest per month. We want to find out how many years will it take for the
    bank account to reach Zero.

    How do we approach this?
    We know that the we want to account to reach 0 or greater than zero. Using a while loop
    we declared our original bank account balance, and monthly interest. In the loop, we want
    to find the new account balance after every month. Therefore, we have the original balance
    subtracted by the balance multiplied by the monthly interest. Afterwards, we define months
    equal to zero, because we are taking to account the first month balance then add 1 for the
    next month. I printed the bank account balance to check if the program is running correctly.
    Once I have the months I divide it by 12 to find the total years.

*/

#include <iostream>
using namespace std;

    int main(){
        int BankAccount = 10000;
        const double MonthlyInterest = .5;
        //const double YearlyInterest = .06; Was not used in the Code.
        int Months = 0;
        int Years;


        while(BankAccount > 0){
            BankAccount = BankAccount - (BankAccount*MonthlyInterest);
            cout << "Bank account balance: " << BankAccount << endl;
            Months = Months + 1;
            cout << "Months passed: " << Months << endl;
        }

        Years = Months/12;
        cout << "Total years for Bank account to reach 0 is: " << Years << endl;
    }
