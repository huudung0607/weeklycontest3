#include <iostream>
#include <cmath>

using namespace std;

bool sodep(int n) {
    int last_num = n % 10;
    n /= 10;
    while (n)
    {
        int next_num = n % 10;
        if (next_num % 2 == 0 && last_num % 2 != 0)
        {
            return false;
            break;
        }
        else if (next_num % 2 != 0 && last_num % 2 == 0)
        {
            return false;
            break;
        }
        last_num = next_num;
        n /= 10;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (sodep(i)) {
            cout << i << " ";
        }
    }
}
