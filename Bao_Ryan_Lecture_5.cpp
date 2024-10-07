//Ryan Bao
//Lecture 5  
//10/7/2024

#include <iostream>                                                          //Use std for ease of coding
#include<iomanip>

using namespace std;                                                 //std for ease of coding

int main()                                                                    //initialize main
{
    float start_amt;                                                              //define variables
    float transactions_day;
    float transaction_amt;
    float debit_amount;
    float credit_amount;
    debit_amount = 0;
    credit_amount = 0;
    string type_transaction;

    cout << endl;
    cout << "How much money did you have at the start of the end followed by a space and how many transactions you had that day. " << endl;                     //Ask user for start money and # of transactions
    cin >> start_amt >> transactions_day;
    cout << endl;

    for (int i = 0; i < transactions_day; i += 1)                                                                        //Use for statement using i and # of transactions
    {
        cout << "What type of transaction did you have and the amount? Ex: Debit/Credit 10.25 " << endl;                           //Ask for type of transaction and amount
        cin >> type_transaction >> transaction_amt;;
        cout << endl;
        if (type_transaction == "Debit")                                                                      //Two scenarios for if statements
            start_amt -= transaction_amt;
            debit_amount += transaction_amt;
        if (type_transaction == "Credit")
            start_amt += transaction_amt;
            credit_amount += transaction_amt;
    }
    cout << fixed << setprecision(2);
    cout << "Account Total: $" << start_amt << endl;                                                           //Print totals
    cout << "Debit Total: -$" << debit_amount/2 << endl;
    cout << "Credit Total: $" << credit_amount/2 << endl;

return 0;
}

/*
How much money did you have at the start of the end followed by a space and how many transactions you had that day. 
100.50 4

What type of transaction did you have and the amount? Ex: Debit/Credit 10.25
Credit 10.5

What type of transaction did you have and the amount? Ex: Debit/Credit 10.25
Credit 10

What type of transaction did you have and the amount? Ex: Debit/Credit 10.25
Debit 10.5

What type of transaction did you have and the amount? Ex: Debit/Credit 10.25
Debit 10

Account Total: $100.50
Debit Total: -$20.50
Credit Total: $20.50
*/