#include <iostream>
using namespace std;

int main() {
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	int count = 0;
	int x = a;
	while ((x >= a && x <= n))
	{
		int y = b;
		while (y <= n - x && y >= b)
		{
			int z = n - y - x;
			if (z >= c)
			{
				count++;
			}
			y++;
		}
		x++;
	}
	cout << count;
}
