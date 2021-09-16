
#include <iostream>
using namespace std;

int if6(int a, int b);
int if15(int a, int b, int c);
int if18(int a, int b, int c);
int if19(int a, int b, int c, int d);
int if28(int year);


int main()
{
    cout << if6(3, 5) << endl;
    cout << if15(3, 6, 9) << endl;
    cout << if18(7, 100, 100) << endl;
    cout << if19(25, 25, 4, 25) << endl;
    cout << if28(2022) << endl;
}

// функція повертає більше з двох значень
int if6(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

//функція знаходить суму двох найбільних чисел з трьох
int if15(int a, int b, int c) {
    int sum = a + b + c;
    int min = 0;
    if (a < b && a < c) {
        min = a;
    }
    else if (b < a && b < c) {
        min = b;
    }
    else if (c < a && c < b) {
        min = c;
    }
    return sum - min;
}

//функція виводить число, відмінне від двох інших
int if18(int a, int b, int c) {
    if (a == b) {
        return 3;
    }
    else if (b == c) {
        return 1;
    }
    else if (a == c) {
        return 2;
    }
}

int if19(int a, int b, int c, int d) {
    if (a == b && b == c) {
        return 4;
    }
    else if (a == b && a == d) {
        return 3;
    }
    else if (a == c && c == d) {
        return 2;
    }
    else {
        return 1;
    }
}

//функція визначає кількість днів у році
int if28(int year) {
    if (year % 400 == 0) {
        return 366;
    }
    else if (year % 100 == 0) {
        return 365;
    }
    else if (year % 4 == 0) {
        return 366;
    }
    else {
        return 365;
    }
}

