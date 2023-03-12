#include <iostream>
#include <string>
#include <vector>
using namespace std;

void is_valid_credit_card_number(string card_number) {
    // Get the checking number and the credit card number without the checking number
    int checking_number = card_number.back() - '0';
    string credit_card_number = card_number.substr(0, card_number.length() - 1);

    // Reverse the credit card number and convert it into a vector of integers
    vector<int> reversed_card_number;
    for (int i = credit_card_number.length() - 1; i >= 0; i--) {
        reversed_card_number.push_back(credit_card_number[i] - '0');
    }

    // Double every other digit in the reversed credit card number
    vector<int> doubled_digits;
    for (int i = 0; i < reversed_card_number.size(); i++) {
        if (i % 2 == 0) {
            int doubled_digit = reversed_card_number[i] * 2;
            if (doubled_digit > 9) {
                doubled_digit -= 9;
            }
            doubled_digits.push_back(doubled_digit);
        } else {
            doubled_digits.push_back(reversed_card_number[i]);
        }
    }

    // Sum up all the digits in the modified credit card number
    int modified_sum = 0;
    for (int i = 0; i < doubled_digits.size(); i++) {
        modified_sum += doubled_digits[i];
    }

    // Add the checking number back to the sum
    int total_sum = modified_sum + checking_number;

    // Check if the final sum is divisible by 10
    if (total_sum % 10 == 0) {
        cout << "Credit card number is valid" << endl;
    } else {
        cout << "Credit card number is not valid" << endl;
    }
}

int main() {
    string card_number;
    cout << "Enter your credit card number: ";
    cin >> card_number;
    is_valid_credit_card_number(card_number);
    return 0;
}
