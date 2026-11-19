#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int sum = n * (n + 1) / 2;
	int half = sum / 2;
	bool isSumOdd = sum % 2;

	if (isSumOdd != 0) {
		cout << "No solution";
		return 0;
	}

	for (int i = n; i > 0; i--) {
		int r = half - i;
		if (i <= half) {
			half = r;
			cout << " - " << i;
		}
		else {
			cout << " + " << i;
		}
	}



	
	cout << " = 0";

	return 0;
}
