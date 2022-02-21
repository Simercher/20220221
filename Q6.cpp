#include <iostream>

using namespace std;

void solve(int a, int b, int c, int d, int e);

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    solve(a, b, c, d, e);

    return 0;
}

void solve(int a, int b, int c, int d, int e){
    int result = 0;
    result = a + b * 2 + c * 2 + d * 2 - e * 2;
    if (result >= 45){
        cout << "A" << endl;
    }else if (result >= 35){
        cout << "B" << endl;
    }else if (result >= 25){
        cout << "C" << endl;
    }else{
        cout << "D" << endl;
    }
}