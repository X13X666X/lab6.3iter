#include <iostream>
using namespace std;

// Функція для підрахунку кількості непарних елементів (ітераційний підхід)
int CountOddElements(int* a, const int size) {
    if (size <= 0 || a == nullptr) {
        return 0; // Якщо масив порожній, повертаємо 0
    }

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

// Шаблонна функція для підрахунку непарних елементів
template <typename T>
int CountOddElements(T* a, const int size) {
    if (size <= 0 || a == nullptr) {
        return 0; // Якщо масив порожній, повертаємо 0
    }

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (static_cast<int>(a[i]) % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    const int n = 10;
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "CountOddElements(a, n) = " << CountOddElements(a, n) << endl;

    double b[n] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
    cout << "CountOddElements(b, n) = " << CountOddElements(b, n) << endl;

    return 0;
}
