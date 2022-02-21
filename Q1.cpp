#include <iostream>

using namespace std;

int main()
{
    int N, m, n, k, Max = 0, result = 0, arr[999][999] = {0};

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> m >> n >> k;
        for(int j = 0; j < m; j++){
            for(int k = 0; k < n; k++){
                cin >> arr[j][k];
            }
        }
        
        for(int i = 0; i + k <= m; i++){
            for(int j = 0; j + k <= n; j++){
                for(int y = 0; y < k; y++){
                    for(int z = 0; z < k; z++){
                        result += arr[i + y][j + z];
                        // cout << i + y << " " << j + z << endl;
                        if (result > Max){
                            Max = result;
                            // cout << Max << endl;
                        }
                    }
                }
                // cout << endl;
                result = 0;
            }
        }
        
        cout << Max << endl;
        Max = 0;
        result = 0;
    }

    return 0;
}