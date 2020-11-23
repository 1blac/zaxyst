#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int n, const int m);
void Print(int** a, const int n, const int m);
void SymMatrix(int** a, const int n, const int m, int sim);
int main()
{
    srand((unsigned)time(NULL));
    int Low = 0;
    int High = 1;
    int n;
    int m;
    int sim = true;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    if (n == m)
    {

    }
    else {
        cout << "matrix is not simetric" << endl;
    }

    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];
    Create(a, n, m);
    Print(a, n, m);
    SymMatrix(a, n, m, sim);
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    return 0;
}
void Create(int** a, const int n, const int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
void Print(int** a, const int n, const int m)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;

 }
void SymMatrix(int** a, const int n, const int m, int sim)
{
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if (i = j) break;
        if (a[i][j] != a[j][i])
        {
            sim == false;
            break;
            
        }
        if (sim == false) 
            break;
    }
}
if (sim == false)
cout << " " << endl;
if (sim == true)
cout << "is simetric" << endl;
    

}

