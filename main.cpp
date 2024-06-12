#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

    void reduce() {
        int common = (numerator < denominator ? numerator : denominator);
        if (common < 0) common = -common;
        while (common > 1) {
            if (numerator % common == 0 && denominator % common == 0) {
                numerator /= common;
                denominator /= common;
            }
            common--;
        }
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction(int num, int den) : numerator(num), denominator(den) {
        if (den == 0) {
            std::cerr << "Denominator cannot be zero, setting to 1" << std::endl;
            denominator = 1;
        }
        reduce();
    }

    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction operator-(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction operator*(const Fraction& other) const {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction operator/(const Fraction& other) const {
        if (other.numerator == 0) {
            std::cerr << "Cannot divide by zero, returning original fraction" << std::endl;
            return *this;
        }
        int num = numerator * other.denominator;
        int den = denominator * other.numerator;
        return Fraction(num, den);
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }
};

int main() {
    Fraction a(1, 2);
    Fraction b(3, 4);

    Fraction result_add = a + b;
    Fraction result_sub = a - b;
    Fraction result_mul = a * b;
    Fraction result_div = a / b;

    std::cout << "a + b = " << result_add << std::endl;
    std::cout << "a - b = " << result_sub << std::endl;
    std::cout << "a * b = " << result_mul << std::endl;
    std::cout << "a / b = " << result_div << std::endl;

    return 0;
}
