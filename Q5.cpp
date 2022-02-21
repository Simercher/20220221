#include <iostream>

using namespace std;

void solve(double x1, double x2, double y1, double y2);

int main()
{
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    solve(x1, x2, y1, y2);

    return 0;
}

void solve(double x1, double x2, double y1, double y2){
    double result = 0.0;
    x1 -= x2;
    y1 -= y2;
    result = y1 / x1;
    cout << result << endl;
    
}