#include <iostream>

using namespace std;

void solve(int A, int F);

int main()
{
    int n = 0, A, F;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> A >> F;
        solve(A, F);
    }

    return 0;
}

void solve(int A, int F){
    for(int i = 0; i < F; i++){
        for(int j = 1; j <= A; j++){
            for (int k = 0; k < j; k++){
                cout << j;
            }
            cout << endl;
        }
        for (int j = A - 1; j > 0; j--){
            for (int k = 0; k < j; k++){
                cout << j;
            }
            cout << endl;
        }
        cout << endl;
    }
}