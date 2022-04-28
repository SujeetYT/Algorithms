#include<iostream>
using namespace std;

int binarySearch(int* arr, int size, int key){
    int low = 0, high = size-1, mid;
    // mid = (low+high)/2;
    //  or
    mid = low + (high - low)/2;
    while(low <= high){
        if(key == arr[mid])
            return mid;
        
        if(key >= arr[mid])
            low = mid+1;
        else high = mid-1;

        mid = (low+high)/2;
    } 
    return -1;
}

int main(){
    int totalElements;
    cin>>totalElements;

    int* arr = new int[totalElements];
    for(int i =0; i < totalElements; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr, totalElements, key);
    return 0;
}