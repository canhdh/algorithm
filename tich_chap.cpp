#include <iostream>

using namespace std;

int main() {
	int lenga = 8, lengb = 3, step = 1;
	int a[lenga][lenga] =
	{
		{3,5,6,4,3,6,4,6},
		{6,2,8,2,8,9,2,8},
		{0,3,5,2,6,1,7,9},
		{1,5,3,7,8,3,8,1},
		{5,6,7,8,2,7,1,5},
		{8,1,5,6,3,6,7,1},
		{6,2,6,7,7,2,6,7},
		{1,6,2,5,6,7,3,6}
	};

	int b[lengb][lengb] = 
	{
		{1,0,1},
		{0,0,1},
		{1,1,0}
	};
	
	for (int i = 0; i <= lenga - lengb; i = i + step) {
		for (int j = 0; j <= lenga - lengb; j = j + step) {
			int sum = 0;
			for (int k = 0; k <= lengb - 1; k = k + 1) {
				for (int l = 0; l <= lengb - 1; l = l + 1) {
					sum = sum + a[i+k][j+l] * b[k][l];
				}
			}
			cout << sum << " ";
		}
		cout << "\n";
	}
	return 0;
}
