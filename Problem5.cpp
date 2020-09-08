#include <iostream>

using namespace std;


int main(){
	int x, y, m, n, r, ans;
	cin >> x >> y;

	m = x; n = y;
	do{
		r = m % n;
		m = n;
		n = r;
	} while (r != 0);

	ans = (x - 1) + (y - 1) + 2 - (m - 1);

	cout << ans << endl;

}