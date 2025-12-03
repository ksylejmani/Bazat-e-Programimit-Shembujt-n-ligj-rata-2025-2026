#include <iostream>
using namespace std;

void countDigits(int number, int &zeroes, int &non_zeroes, int &digits) {
    zeroes = 0;
    non_zeroes = 0;
    digits = 0;
    int i = number;
    while (i > 0) {
        cout << "Test\n";
        int digit = i % 10;
        if (digit == 0) {
            cout << "Test2\n";
            zeroes++;
        } else {
            cout << "Test3\n";
            non_zeroes++;
        }
        i = i / 10;
    }
    digits = zeroes + non_zeroes;
}

int main() {
    int number = 20250001;
    int zeroes, non_zeroes, digits;
    countDigits(number, zeroes, non_zeroes, digits);
    cout << "The number of zeroes is: " << zeroes << endl;
    cout << "The number of non zeroes is: " << non_zeroes << endl;
    cout << "The number of digits is: " << digits << endl;

    return 0;
}