# Credit card validator using C++


This code checks the validity of a credit card number by implementing the Luhn algorithm. The Luhn algorithm is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers. The algorithm works by calculating a checksum digit based on the other digits in the number.

The code first takes the credit card number as input from the user and separates the checking number from the card number. Then, it reverses the credit card number and converts it into a vector of integers. It then doubles every other digit in the reversed credit card number, subtracts 9 from the resulting number if it is greater than 9, and stores the resulting digits in a new vector. The modified digits are then summed up, the checking number is added back to the sum, and the total sum is checked to see if it is divisible by 10. If the final sum is divisible by 10, the credit card number is considered valid, otherwise, it is considered invalid.

The code uses standard C++ libraries including iostream, string, and vector to implement the Luhn algorithm. The input and output streams are used to interact with the user, while the string and vector data types are used to manipulate the credit card number. Overall, this code provides a simple implementation of the Luhn algorithm for validating credit card numbers.
