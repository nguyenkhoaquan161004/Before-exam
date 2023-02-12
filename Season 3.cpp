////Them mot phan tu vao chuoi cho truoc

//#include <iostream>
//using namespace std;
//
//void Nhap(int a[], int& n)
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//}
//
//void Load(int a[], int& n, int& k, int& t)
//{
//    cin >> k >> t;
//    for (int i = n; i >= k; i--)
//    {
//        a[i + 1] = a[i];
//    }
//    a[k] = t;
//    n++;
//}
//int main()
//{
//    int a[100], n;
//    Nhap(a, n);
//    int k, t;
//    Load(a, n, k, t);
//    for (int i = 0; i < n; i++)
//    {
//        cout << a[i];
//    }
//    return 0;
//}

////Tim pham giao giua hai mang cho truoc

//#include <iostream>
//using namespace std;
//
//void Nhap(int a[], int b[], int& n, int& m)
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    cin >> m;
//    for (int i = 0; i < m; i++)
//    {
//        cin >> b[i];
//    }
//}
//
//void Load(int a[], int b[], int c[], int n, int m)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (a[i] == b[j])
//            {
//                c[i] = a[i];
//            }
//        }
//    }
//    for (int i = 0; i < n-2; i++)
//    {
//        for (int j = i+1; j < n-1; j++)
//        {
//            if (c[i] > c[j])
//            {
//                swap(c[i], c[j]);
//            }
//        }
//    }
//}
//int main()
//{
//    int a[100], b[100], n, m;
//    Nhap(a, b, n, m);
//    int c[100];
//    Load(a, b, c, n, m);
//    for (int i = 0; i < n; i++)
//    {
//        cout<< c[i];
//    }
//    return 0;
//}

//Phan tu duy nhat

//#include <iostream>
//using namespace std;
//
//void Input(char a[], int& n)
//
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//}
//
//void Output(char a[], int n)
//{
//	for (int i = 0; i < n - 2; i++)
//	{
//		for (int j = i + 1; j < n - 1; j++)
//		{
//			if (a[i] == a[j])
//			{
//				a[i] = '*';
//				a[j] = '*';
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//		if (a[i] != '*')
//		{
//			cout << a[i];
//		}
//}
//int main()
//{
//	char a[1000];
//	int n;
//	Input(a,n);
//	Output(a, n);
//	
//	return 0;
//}

// So bi thieu

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
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i + 1; j < n ; j ++ )
//		{
//			if (a[i] > a[j])
//				swap(a[i], a[j]);
//		}
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		if (a[i + 1] != a[i] + 1)
//			cout << a[i] + 1;
//	}
//}
//int main()
//{
//	int a[1000], n;
//	Input(a, n);
//	Output(a, n);
//	return 0;
//}