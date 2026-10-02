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

    int Max = arr[0];
    for(int i = 0; i <= n-1; i++){
        if(Max < arr[i]){
            Max = arr[i];
        }
    }
    cout<<"Maximum value out of all Array is: "<<Max;
    return 0;
}