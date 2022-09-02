//#include<iostream>
//#include<stack>
//using namespace std;
//typedef long long LL;
//stack<LL> stk;
//LL calc(LL a, LL b, char c) {
//	switch (c) {
//	case '+':return a + b;
//		break;
//	case '-':return a - b;
//		break;
//	case '*':return a * b;
//		break;
//	case '/':return a / b;
//		break;
//	}
//}
//int main() {
//	char s[260];
//	LL num = 0;
//	cin.getline(s, 260);
//	for (int i = 0; s[i] != '@'; i++) {
//		if (s[i] >= '0' && s[i] <= '9') {
//			num = num * 10 + (s[i] - '0');
//		}
//		else if (s[i] == ' ') {
//			stk.push(num);
//			num = 0;
//		}
//		else {
//			LL b = stk.top();
//			stk.pop();
//			LL a = stk.top();
//			stk.pop();
//			stk.push(calc(a, b, s[i]));
//		}
//	}
//	cout << stk.top();
//	return 0;
//}