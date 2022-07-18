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
//	char arr[4][4];
//
//	for (int i = 0; i < 4; i++)
//		for (int j = 0; j < 4; j++)
//			cin >> arr[i][j];
//	
//	int can;
//	bool found = false;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			can = 0;
//			char current = arr[i][j];
//			if (i != 3)
//			{
//				if (current == arr[i][j + 1])
//					can++;
//				if (current == arr[i + 1][j])
//					can++;
//				if (current == arr[i + 1][j + 1])
//					can++;
//			}
//			else
//			{
//				if (current == arr[i][j + 1])
//					can++;
//				if (current == arr[i - 1][j])
//					can++;
//				if (current == arr[i - 1][j + 1])
//					can++;
//			}
//			
//			if (can >= 2)
//			{
//				found = true;
//				break;
//			}
//		}
//		if (found)
//			break;
//	}
//	if (found)
//		cout << "YES";
//	else cout << "NO";
//
//	return 0;
//}