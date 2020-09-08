#include <iostream>

using namespace std;

int main(){
	int m, f, b, sum;

	cin >> m >> f >> b;

	sum = b - m;

	if (sum <= 0) cout << "0" << endl;
	else{
		if (sum <= f) cout << sum << endl;
		else cout << "NA" << endl;
	}

	return 0;
}