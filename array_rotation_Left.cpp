#include <iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void rotateLeft(vector<int>& arr, int k){
    int n=arr.size();
    k=k%n; // Adjust rotation if k is greater than array size
    if(k==0)return; // No need to rotate if k is 0
    reverseArray(arr,0,k-1); // reverse first part (0 - k-1)
    reverseArray(arr,k,n-1); // reverse second part (k - n-1)
    reverseArray(arr,0,n-1); // reverse whole array
}

int main(){
    int n;
    cout<<"Enter Size:"<< " ";
    cin>>n;

    vector<int> arr(n);
    cout<< "Enter elements:"<< " ";
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    
    int k;
    cout<<"Enter no. of position for left rotation:"<< " ";
    cin>>k;

    cout<< "Original array:"<< " ";
    for(int i=0;i<n;++i){
        cout << arr[i]<< " ";
    }
     cout<< endl;

    rotateLeft(arr,k);
    cout<< "Rotated array by "<<k<< " position :"<< " ";
    for(int i=0;i<n;++i){
        cout << arr[i]<< " ";
    }
     
}

