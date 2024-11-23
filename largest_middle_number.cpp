#include <iostream>
#include <cmath>
using namespace std;

bool sodep(int n) {
	int count = 0;
	int temp1 = n;
	while (temp1)
	{
		temp1 /= 10;
		count++;
	}
	if (count % 2 != 0)
	{
		int temp = n;
		int temp2 = n;
		int max = -1000000;
		while (temp)
		{
			if ((temp % 10) > max)
			{
				max = (temp % 10);
			}
			temp /= 10;
		}
		while (temp2 >= pow(10, (count + 1) / 2))
		{
			temp2 /= 10;
		}
		if ((temp2 % 10) == max)
		{
			return true;
		}
		return false;
	}
	return false;
}
int main() {
	int a, b;
	cin >> a >> b;
	bool found = false;
	for (int i = a; i <= b; i++)
	{
		if (sodep(i))
		{
			cout << i << " ";
			found = true;
		}
	}
	if (!found)
	{
		cout << "28tech";
	}
}
