#include <iostream>
#include <string>

using namespace std;

class Expense {
private:
    int expenseId;
    string category;
    double amount;

public:
    // Constructor with default values
    Expense(int id = 0, string cat = "", double amt = 0.0) {
        expenseId = id;
        category = cat;
        amount = amt;
    }

    // Function to input expense details
    void inputExpense(int id) {
        expenseId = id;
        cout << "Enter category: ";
        cin >> category;
        cout << "Enter amount: ";
        cin >> amount;
    }

    // Function to display expense details
    void displayExpense() const {
        cout << "Expense ID: " << expenseId << ", Category: " << category << ", Amount: $" << amount << endl;
    }
};

int main() {
    int numExpenses;

    cout << "Enter the number of daily expenses: ";
    cin >> numExpenses;

    Expense expenses[numExpenses]; // Array of Expense objects

    // Input expenses
    for (int i = 0; i < numExpenses; i++) {
        cout << "Expense " << i + 1 << ":\n";
        expenses[i].inputExpense(i + 1);
    }

    // Display all expenses
    cout << "\nDaily Expense Details:\n";
    for (int i = 0; i < numExpenses; i++) {
        expenses[i].displayExpense();
    }

    return 0;
}