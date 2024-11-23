#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
	bool flag = false;
	if (n == 0)
	{
		cout << "29tech";
	}
	else
	{
		long long temp = n;
		while (n >= 100)
		{
			n /= 10;
		}
		if ((n % 10) % 2 == 0 && ((temp / 10) % 10) % 2 == 0)
		{
			flag = true;
		}
		else if ((n % 10) % 2 != 0 && ((temp / 10) % 10) % 2 != 0)
		{
			flag = true;
		}
		if (flag)
		{
			cout << "28tech";
		}
		else
		{
			cout << "29tech";
		}
	}
}
