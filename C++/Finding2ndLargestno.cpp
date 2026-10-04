#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an Array: ";
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    int secondLargest = -1;
    
    for(int i = 1; i <= n-1; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    
    if(secondLargest == -1){
        cout<<"There is no second largest element in the array.";
    } else {
        cout<<"Second Largest value out of all Array is: "<<secondLargest;
    }
    
    return 0;
}