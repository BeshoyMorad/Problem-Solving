//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//typedef long long ll;
//typedef unsigned int ui;
//
//
//int main() {
//
//	int n;
//	cin >> n;
//	string s;
//	cin >> s;
//
//	// ...RRR...		(first R - last R + 1)
//	// ...LLL...		(first L - 1 - last L)
//	// ..RRLL...		(first R - last R)
//	
//	int i = 0;
//	int j = n - 1;
//	
//	//get the first position
//	while (s[i] == '.' || s[j] == '.')
//	{
//		if (s[i] == '.')
//			i++;
//		if (s[j] == '.')
//			j--;
//	}
//
//	
//	if (s[i] == 'R' && s[j] == 'R')
//		cout << i + 1 << " " << j + 2;
//
//	else if (s[i] == 'L' && s[j] == 'L')
//		cout << j + 1 << " " << i;
//
//	else
//	{
//		while (s[j] != 'R')
//			j--;
//		
//		cout << i + 1 << " " << j + 1;
//	}
//
//	return 0;
//}