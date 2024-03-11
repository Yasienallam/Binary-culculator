#include <iostream>
#include <string>
#include <bitset>

using namespace std;

// Function to perform binary addition
string binaryAddition(string a, string b) {
    bitset<64> num1(a);
    bitset<64> num2(b);
    bitset<64> sum = num1.to_ullong() + num2.to_ullong();
    return sum.to_string();
}

// Function to perform binary subtraction
string binarySubtraction(string a, string b) {
    bitset<64> num1(a);
    bitset<64> num2(b);
    bitset<64> diff = num1.to_ullong() - num2.to_ullong();
    return diff.to_string();
}

// Function to perform binary multiplication
string binaryMultiplication(string a, string b) {
    bitset<64> num1(a);
    bitset<64> num2(b);
    bitset<64> product = num1.to_ullong() * num2.to_ullong();
    return product.to_string();
}

// Function to perform binary division
string binaryDivision(string a, string b) {
    bitset<64> num1(a);
    bitset<64> num2(b);
    if (num2.to_ullong() == 0) {
        return "Cannot divide by zero!";
    }
    bitset<64> quotient = num1.to_ullong() / num2.to_ullong();
    return quotient.to_string();
}

int main() {
    string num1, num2;
    char op;

    cout << "Enter first binary number: ";
    cin >> num1;
    cout << "Enter second binary number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    string result;

    switch (op) {
        case '+':
            result = binaryAddition(num1, num2);
            break;
        case '-':
            result = binarySubtraction(num1, num2);
            break;
        case '*':
            result = binaryMultiplication(num1, num2);
            break;
        case '/':
            result = binaryDivision(num1, num2);
            break;
        default:
            cout << "Invalid operation!";
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
