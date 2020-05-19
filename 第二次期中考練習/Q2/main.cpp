#include<queue>
#include<iostream>
using namespace std;


int main() {

	queue<char> Q;
	for (int i = 0; i < 7; i++) {
		char c;
		cin >> c;
		Q.push(c);
	}
	
	for (int i = 0; i < 3; i++) {
		//+11-62*
		int symbol = Q.front();
		Q.pop();
		int n1 = Q.front()-48;
		Q.pop();
		int n2 = Q.front()-48;
		Q.pop();
	
		int ans = 0;
		switch (symbol)
		{
		case '+':
			ans = n1 + n2;
			break;
		case '-':
			ans = n1 - n2;
			break;
		case '*':
			ans = n1 * n2;
			break;
		case '/':
			ans = n1 / n2;
			break;
		default:
			break;
		}

		cout << ans << endl;
		Q.push(ans+48);
		

	}

	system("pause");
	return 0;

}