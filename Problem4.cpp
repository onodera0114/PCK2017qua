#include <iostream>

using namespace std;

int main(){
	int a, b, n;
	int f, s;
	int ans = 0;
	cin >> a >> b >> n;

	for (int i = 1; i <= n; i++){
		cin >> s >> f;
		if ((a > s && a < f) || (b > s && b < f) || (a <= s && b >= f))  ans = 1;
	}

	cout << ans << endl;

	return 0;
}