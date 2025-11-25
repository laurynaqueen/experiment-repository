#include <iostream>
using namespace std;

int main() {
    int start = 20;
    int sum = 0;

    while (start <= 25) {
        sum += start;
        start++;
    }

    cout << "Sum = " << sum;

    return 0;
}