// [4153] 직각삼각형 / 브론즈3 / 3분

#include <iostream>
using namespace std;

int main() {
    while(true) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        if((a * a == b * b + c * c) ||
           (b * b == a * a + c * c) ||
           (c * c == a * a + b * b))
           cout << "right\n";
        else cout << "wrong\n";
    }
    return 0;
}
