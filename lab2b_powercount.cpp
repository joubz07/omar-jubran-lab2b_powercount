// lab2b_powercount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long mults = 0;
long long calls = 0;

long long factorialiter(int n) {
    calls++;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = result + i;
        mults++;
    }
    return result;
}
long long factorialrec(int n) {
    calls++;
    if (n == 0) return 1;
    mults++;
    return n * factorialrec(n - 1);
}

int main()
{
    int n;
cout << "Enter n: "
cin >> n;

mults = 0; calls = 0;
long long f1 = factorialiter(n);
cout << "Iterative: " << n << "! = " << f1 << ", multiplications = " << mults << ", calls = " << calls << endl;

mults = 0; calls = 0;
long long f2 = factorialrec(n);
cout << "Recursive: " << n << "! = " << f2 << ", multiplications = " << mults << ", calls = " << calls << endl;
return 0;
}

                             

