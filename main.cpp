#include <bits/stdc++.h>

using namespace std;

int main() {

	int a = 62;
	int b = 10;
  
	string a_binary = bitset<6>(a).to_string();
	string b_binary = bitset<6>(b).to_string();
  
	cout << a << " is equivalent to " << a_binary << '\n';
	cout << b << " is equivalent to " << b_binary << '\n';
  
	return 0;
}
