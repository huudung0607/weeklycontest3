#include <iostream>
using namespace std;


bool sodep(int n) {
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	if (sum % 10 == 2 || sum % 10 == 3 || sum % 10 == 5 || sum % 10 == 7)
	{
		return true;
	}
	return false;
}
int main() {
	int a, b;
	cin >> a >> b;
	bool found = false;
	for (int i = a; i <= b; i++) {
		if (sodep(i))
		{
			cout << i << " ";
			found = true;
		}
	}
	if (!found)
	{
		cout << "NOT FOUND";
	}
}
