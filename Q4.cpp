#include <iostream>

using namespace std;

void solve(int [], int N);

int main()
{
    int n = 0;
    int arr[999];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    solve(arr, n);

    return 0;
}

void solve(int nums[], int ct){
    int aim = 0, flag = 0;
    for(int i = 0; i < ct; i++){
        for(int j = i; j < ct; j++){
            if(nums[i] == nums[j] && i != j)
            {
                // cout << nums[i] << " " << nums[j] << endl;
                // printf("123\n");
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1){
        cout << "0" << endl;
    }else{
        cout << "1" << endl;
    }
}