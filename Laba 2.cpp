#include<iostream>
#include <clocale>
using namespace std;
const int n = 10;
int main()
{
    int a[n];
    bool f = true;
    setlocale(LC_ALL, "Ru");
    int j;
    int k = 1;
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 100;
        cout << a[i] << ' ';
    }
    cout << endl;
    int i = 0;
    while (f == true && i < n) {
        if (a[i] >= a[i + 1]) f = false;
        else i += 1;

    }
    if (f == true) cout << "Упорядочен";
    else cout << "Неупорядочен";
    return 0;
}