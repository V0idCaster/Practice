#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an Array: ";
    scanf("%d", &n);
    vector<int> arr(n);
    for(int i = 0; i <= n-1; i++){
        scanf("%d", &arr[i]);
    }
    
    int Min = arr[0];
    for(int i = 1; i <= n-1; i++){
        if(Min > arr[i]){
            Min = arr[i];
        }
    }
    cout<<"Minimum value out of all Array is: "<<Min;
    return 0;
}