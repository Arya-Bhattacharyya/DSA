#include <iostream>
#include<vector>
#include<algorithm>
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

void rotateRight(vector<int>& arr, int k){
    int n=arr.size();
    k=k%n; // Adjust rotation if k is greater than array size
    if(k==0)return; // No need to rotate if k is 0
    reverseArray(arr,n-k,n-1); // reverse second part (n-k - n-1)
    reverseArray(arr,0, n-k-1); // reverse first part (0 - n-k-1)
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
    cout<<"Enter no. of position for right rotation:"<< " ";
    cin>>k;

    cout<< "Original array:"<< " ";
    for(int i=0;i<n;++i){
        cout << arr[i]<< " ";
    }
    cout<< endl;

    rotateRight(arr,k);

    cout<< "Rotated array by "<<k<< " position :"<< " ";
    for(int i=0;i<n;++i){
        cout << arr[i]<< " ";
    }
     
}

