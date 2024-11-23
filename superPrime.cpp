////sieu so nguyen to. contest from 28tech
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long long n;
  cin >> n;
	bool prime = true;
	if (n == 0)
	{
		cout << "29tech";
	}
	else
	{
		while (n)
		{
			long long a = n % 10;
			if (a != 2 && a != 5 && a != 7 && a != 3)
			{
				prime = false;
				break;
			}
			n /= 10;
		}
		if (prime)
		{
			cout << "28tech";
		}
		else
		{
			cout << "29tech";
		}
	}
}
