#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    if(n<3){
     cout<<"0\n";
    return 0;
    }
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
        }

        int ans = 0;

for(int i = 1; i < n - 1; i++){
    if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
        int left = i;
        while(left > 0 && arr[left-1] < arr[left]){
            left--;
        }

        int right = i;
        while(right < n - 1 && arr[right+1] < arr[right]){
            right++;
        }

        int length = right - left + 1;
        if(length > ans) ans = length;
    }
}

cout << ans << "\n";
        return 0;
    }

