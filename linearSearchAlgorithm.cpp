#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key)
            return i;
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

    cout<<linearSearch(arr, totalElements, key);
    return 0;
}