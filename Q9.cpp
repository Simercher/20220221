#include <iostream>

using namespace std;

int main()
{
    int n, x, y, maxlen = 0, ct = 1, num = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        for(int j = x; j <= y; j++){
            num = j;
            while (num != 1){
                if (num % 2 == 1){
                    num = num * 3 + 1;
                    ct++;
                }else{
                    num /= 2;
                    ct++;
                }
            }
            if (ct > maxlen){
                maxlen = ct;
            }
            ct = 1;
        }
        cout << x << " " << y << " " << maxlen << endl;
        maxlen = 0;
    }

    return 0;
}