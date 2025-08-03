#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

string get_card_type(const string& number) {
    int length = number.length();
    int first_digit = number[0] - '0';
    int first_two_digits = stoi(number.substr(0, 2));

    if ((first_digit == 4) && (length == 13 || length == 16)) {
        return "VISA";
    } else if ((first_two_digits == 34 || first_two_digits == 37) && length == 15) {
        return "AMERICAN EXPRESS";
    } else if ((first_two_digits >= 51 && first_two_digits <= 55) && length == 16) {
        return "MASTERCARD";
    } else {
        return "OTHER CARD TYPE";
    }
}

int main() {
    string creditnum_str;

    do {
        cout << "Enter Credit Card Number: ";
        cin >> creditnum_str;
    } while (creditnum_str.empty());

    // Luhn algorithm implementation using string
    int sum = 0;
    bool is_second_digit = false;
    for (int i = creditnum_str.length() - 1; i >= 0; i--) {
        int digit = creditnum_str[i] - '0';
        if (is_second_digit) {
            digit *= 2;
            sum += (digit / 10) + (digit % 10);
        } else {
            sum += digit;
        }
        is_second_digit = !is_second_digit;
    }

    if (sum % 10 == 0) {
        cout << "VALID" << endl;
        cout << "CARD TYPE: " << get_card_type(creditnum_str) << endl;
    } else {
        cout << "INVALID" << endl;
    }

    return 0;
}