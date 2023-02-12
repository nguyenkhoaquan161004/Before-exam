// Kiem tra phan tu lap co dieu kien

//#include <iostream>
//using namespace std;
//
//void Input(int a[], int& n, int &k)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	cin >> k;
//}
//
//void Check (int a[], int &n, int &k)
//{
//	bool flag = false;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] == a[j] && abs(i + j) <= k)
//				flag = true;
//		}
//	}
//	if (flag == true)
//		cout << "true";
//	else
//		cout << "false";
//}
//int main()
//{
//	int a[1000], n, k;
//	Input(a, n, k);
//	Check(a, n, k);
//	return 0;
//}

// Cong them mot

//#include <iostream>
//using namespace std;
//
//void Input(int a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//}
//
//void Change(int a[], int n)
//{
//	int s = 0;
//	for (int i = 0; i < n; i++)
//	{
//		s = s * 10 + a[i];
//	}
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] != 9)
//			flag = false;
//	}
//	if (flag == true)
//		n++;
//	s = s + 1;
//	for (int i = n-1; i >= 0; i--)
//	{
//		a[i] = s % 10;
//		s = s / 10;
//	}
//	for (int i = 0; i < n; i++)
//		cout << a[i]<<" ";
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	Change(a, n);
//	return 0;
//}

// So tuyet dep

//#include <iostream>
//using namespace std;
//
//int Check(int n)
//{
//	int t = n;
//	int s = 0;
//	while (t != 0)
//	{
//		int dv = t % 10;
//		s = s + dv * dv;
//		t = t / 10;
//	}
//	if (s == 1)
//		return 1;
//	if (s == 89)
//		return 0;
//	else
//		return Check(s);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	if (n >= 0)
//	{
//		if (Check(n) == 0)
//			cout << "false";
//		if (Check(n) == 1)
//			cout << "true";
//	}
//	return 0;
//}

// So xau - xau so

//#include <iostream>
//using namespace std;
//
//int Check(int n)
//{
//	while ( n % 2 == 0)
//	{
//			n = n / 2;
//	}
//	while ( n % 3 == 0)
//	{
//			n = n / 3;
//	}
//	while ( n % 5 == 0)
//	{
//			n = n / 5;
//	}
//	if (n == 1)
//		return 1;
//	else
//		return 0;	
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	if (Check(n) == 1)
//		cout << "true";
//	else
//		cout << "false";
//	return 0;
//}