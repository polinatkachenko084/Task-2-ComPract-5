#include <iostream> 
#include <windows.h> 
using namespace std;                
// Біноміальний коефіцієнт C(m, n); параметри — покажчики на константні int 
int binom(const int* m, const int* n)
{
    if (*m <= 1 || *n == 0 || *n == *m)   
	calls++;
    int m1 = *m - 1;    
    int n1 = *n - 1;
    return binom(&m1, &n1) + binom(&m1, n);
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int m, n;
    cout << "Введіть m та n: ";
    cin >> m >> n;
    if (m < 0 || n < 0 || n > m)

    {
        cout << "Потрібно: 0 <= n <= m" << endl;
		return 1;
    }

    int result = binom(&m, &n);
    cout << "C(" << m << ", " << n << ") = " << result << endl;
}   
