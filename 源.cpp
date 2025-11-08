#include<iostream>
using namespace std;
long sum(long a) {
	if (a <= 9)
		return a;
	else {
		return sum(a / 10) + (a % 10);
	}

}
int main() {
	int num;
	cin >> num;
	cout << sum(num) << endl;
}