#include <iostream>
#include <windows.h>
using namespace std;
// Рекурсивна функція: результат записується за покажчиком result
void binom(int m, int n, int* result) {
    if (n > m || n < 0) {
        *result = 0;
        return;
    }
    if (n == 0 || n == m) {
        *result = 1;
        return;
    }

    int a, b;
    binom(m - 1, n - 1, &a);
    binom(m - 1, n, &b);
    *result = a + b;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int m, n, result;
    int* pm = &m;
    int* pn = &n;
    int* pres = &result;

    cout << "Введіть m та n: ";
    cin >> *pm >> *pn;

    if (*pm < 0 || *pn < 0 || *pn > *pm) {
        cout << "Потрібно: 0 <= n <= m" << endl;
        return 1;
    }

    binom(*pm, *pn, pres);
    cout << "C(" << *pm << ", " << *pn << ") = " << *pres << endl;

    return 0;
}
