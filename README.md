# Credit Card Validator

This project is a simple C++ console application that validates credit card numbers using the Luhn algorithm. It's a great exercise for learning fundamental C++ concepts such as loops, conditional statements, and arithmetic operations with large numbers.

## Features

- **Luhn Algorithm Validation:** Checks if a credit card number is valid according to the industry-standard Luhn check.
- **Card Type Identification:** Determines if the card is a VISA, Mastercard, or American Express based on its starting digits and length.
- **User-Friendly Interface:** Prompts the user for a number and provides a clear "VALID" or "INVALID" result with the card type.

## How to Run

1.  **Compile the Code:**
    Use a C++ compiler like g++ to compile the source file.
    ```sh
    g++ credit_card_validator.cpp -o validator
    ```

2.  **Run the Executable:**
    ```sh
    ./validator
    ```

3.  **Enter a Credit Card Number:**
    Follow the on-screen prompt to enter a number to be validated.

## The Luhn Algorithm

The Luhn algorithm is a checksum formula used to validate a variety of identification numbers, such as credit card numbers. The process involves:
1.  Summing up every other digit starting from the right.
2.  Doubling the value of the other digits and then summing their individual digits.
3.  Adding the totals from both steps. If the final sum is divisible by 10, the number is considered valid.

## Contributing

Feel free to fork this project, open issues, or submit pull requests to improve the code, add new features, or refactor the logic.
