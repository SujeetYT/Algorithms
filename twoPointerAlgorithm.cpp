#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int* twoPointer(vector<int>& arr, int x){
            int i = 0;
            int j = arr.size()-1;
            int *pair;
            while(i < j){
                if((arr[i]+arr[j]) == x){
                    *pair = i;
                    *(pair+1) = j;
                    return pair;
                } else if((arr[i] + arr[j]) > x){
                    j--;
                } else if((arr[i] + arr[j]) < x){
                    i++;
                }
            }
            return NULL;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

/*
Find the pair of element whose sum is equal to x
A[] = {10, 20, 35, 50, 75, 80}
X = 70
*/
    Solution obj;
    int x = 70;
    vector<int> arr = {10, 20, 35, 50, 75, 80};
    int* ans = obj.twoPointer(arr, x);
    cout<<*ans<<" "<<*(ans+1);
    return 0;
}