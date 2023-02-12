// Xoa mot phan tu cho truoc mang mot chieu

//#include <iostream>
//using namespace std;
//
//void Input(int a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//void Delete(int a[], int& n, int &vt)
//{
//	cin >> vt;
//	for (int i = vt;i < n; i++)
//	{
//		a[i] = a[i+1];
//		n--;
//	}
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	int vt;
//	Delete(a, n, vt);
//	return 0;
//}

// Gia tri lon nhat mang mot chieu cac so thuc

//#include <iostream>
//using namespace std;
//
//void Input(float a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//float Max(float a[], int n)
//{
//	float Max = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] > Max)
//			Max=a[i];
//	}
//	return Max;
//}
//int main()
//{
//	float a[1000];
//	int n;
//	Input(a, n);
//	cout << Max(a, n);
//	return 0;
//}

// Tim vi tri phan tu cho truoc trong mang mot chieu

//#include <iostream>
//using namespace std;
//
//void Input(int a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//void Output(int a[], int &n, int k)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == k)
//			cout << i << " ";
//	}
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	int k;
//	cin >> k;
//	Output(a, n, k);
//	return 0;
//}

// Kiem tra trong mang co ton tai gia tri chan nho hon so n cho truoc hay khong

//#include <iostream>
//using namespace std;
//
//void Input(int a[], int& n, int& k)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	cin >> k;
//}
//
//void Check(int a[], int n, int k)
//{
//	int flag = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			if (a[i] < k)
//				flag = 1;
//		}
//	}
//	if (flag == 1)
//		cout << "true";
//	else
//		cout << "false";
//}
//int main()
//{
//	int a[1000], n, k;
//	Input(a, n, k);
//	Check(a,n,k);
//	return 0;
//}

// Tim phan tu xuat hien nhieu nhat trong mang mot chieu

//#include <iostream>
//using namespace std;
//
//void Input(int a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//int Check(int a[], int n)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])
//				swap(a[i], a[j]);
//		}
//	}
//	int max = 0;
//	int dem = 1;
//	int t = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == a[i + 1])
//		{
//			dem++;
//			if (dem > max)
//			{
//				max = dem;
//				t = a[i];
//			}
//		}
//		else
//			dem = 1;
//	}
//	return t;
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	cout << Check(a, n);
//	return 0;
//}

// Sap xep mang theo thu tu tang dan

//#include <iostream>
//using namespace std;
//
//void Input(int a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//void Output(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//			if (a[i] > a[j])
//				swap(a[i], a[j]);
//	}
//	for (int i = 0; i < n; i++)
//		cout << a[i];
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	Output(a, n);
//	return 0;
//}

// Kiem tra day tang

//#include <iostream>
//using namespace std;
//void Input(int a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
// }
//
//void Check(int a[], int n)
//{
//	int flag = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > a[i+1])
//			flag = 0;
//		break;
//	}
//	if (flag == 1)
//		cout << "true";
//	if (flag == 0)
//		cout << "false";
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	Check(a, n);
//	return 0;
//}

// Kiem tra day giam

//#include <iostream>
//using namespace std;
//void Input(int a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//void Check(int a[], int n)
//{
//	int flag = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < a[i + 1])
//			flag = 0;
//		break;
//	}
//	if (flag == 1)
//		cout << "true";
//	if (flag == 0)
//		cout << "false";
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	Check(a, n);
//	return 0;
//}

// Vi tri cac gia tri am trong mang 1 chieu

//#include<iostream>
//using namespace std;
//
//void Input(int a[], int& n)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//void Output(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < 0)
//			cout << i;
//	}
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	Output(a, n);
//	return 0;
//}

