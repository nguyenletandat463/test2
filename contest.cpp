#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool ktra(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int tim(int n) {
    int i; int j;
    if (n > 2) {
        i = n;
        while (ktra(i) == false && i > 2)  {
            i--;   
        }  
        j = n;
        while (ktra(j) == false) j++;
        if (abs(n-i) >= abs(j-n)) return j; 
        else return i;
    }
    else {
        j = n;
        while (ktra(j) == false) j++;
        return j;
    }
}
int main () {
    system("cls");
    int n, x, y;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    for (int i = 0; i < n; i++) {
        x = abs(a[i][0] - tim(a[i][0]));
        y = abs(a[i][1] - tim(a[i][1]));
        cout << setprecision(2) << fixed << sqrt(x*x + y*y) << " ";            
    }
    return 0;   
}