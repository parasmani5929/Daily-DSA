#include <iostream>
using namespace std;

bool isvalid(vector<int> &arr,n,m,min){
    int stu = 1;
    for(int i = 0; i<n ;i++){
        if(a[i] > min) return -1;
    }
}

int alloc_books(vector<int> &arr,n,m){
    int sum = 0;
    for(int i =0 ; i<n ; i++){
        sum = sum + arr[i];
    }

    int st = 0 , end = sum;
    int ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isvalid){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
}

int main(){
    vector<int> arr = {2,1,3,4};
    int n = 4, m = 2

    cout<<alloc_books(vecor<int> &arr,n,m);
    return 0;
}
