#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int> &arr, int n){
    int partition=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[partition],arr[i]);
            partition++;
        }
    }
    cout << "New array: ";
    for (int i = 0; i < n; i++) {
        cout<< arr[i]<< " ";
    }
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    moveZeroes(arr,n);
}