#include <iostream>

using namespace std;

void solve(int num, int ctlen);

int main()
{
    int num = 0, ctlen = 0, buf;
    cin >> num;
    buf = num;
    while (buf != 0){
        buf /= 10;
        ctlen++;
    }
    solve(num, ctlen);

    return 0;
}

void solve(int num, int ctlen){
    int buf = num, flag = 0, prime = 0, Max = 0;
    while (ctlen != 0){
        buf = num;
        int N = 1;
        while  (buf != 0){
            int i = 2;
            while (i < buf){
                if (buf % i == 0){
                    flag = 1;
                    break;
                }
                i++;
            }
            if (flag == 0){
                prime = buf;
                if(prime > Max){
                    Max = prime;
                }
            }
            buf /= 10; 
            flag = 0;
        }
        for(int j = 1; j < ctlen; j++){
            N *= 10;
        }
        num %= N;
        ctlen--;
    }
    if (Max != 0){
        cout << Max << endl;
    }else{
        cout << "No prime found" << endl;
    }
}