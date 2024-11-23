#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long count2 = 0;
	long long count3 = 0;
	long long count5 = 0;
	long long count7 = 0;
	long long temp = n;
	long long sum = 0;
	while (temp)
	{
		sum = sum * 10 + (temp % 10);
		temp /= 10;
	}
	long long temp2 = sum;
	while (sum)
	{
		if (sum % 10 == 2)
		{
			count2++;
		}
		else if (sum % 10 == 3)
		{
			count3++;
		}
		else if (sum % 10 == 5)
		{
			count5++;
		}
		else if (sum % 10 == 7)
		{
			count7++;
		}
		sum /= 10;
	}
	while (temp2)
	{
		if (count2 > 0 && temp2 % 10 == 2)
		{
			cout << 2 << " " << count2 << endl;
			count2 = 0;
		}
		else if (count3 > 0 && temp2 % 10 == 3)
		{
			cout << 3 << " " << count3 << endl;
			count3 = 0;
		}
		else if (count5 > 0 && temp2 % 10 ==5 )
		{
			cout << 5 << " " << count5 << endl;
			count5 = 0;
		}
		else if (count7 > 0 && temp2 % 10 == 7)
		{
			cout << 7 << " " << count7 << endl;
			count7 = 0;
		}
		temp2 /= 10;
	}
}
