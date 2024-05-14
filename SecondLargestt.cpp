#include<iostream>
#include<vector>

using namespace std;

int secondLargest(vector<int> &arr, int n){
    int first=0,second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[first]){
            second= first;
            first=i;
        } else if(arr[i]<arr[first]){
            if(second==-1 || arr[second]<arr[i]){
                second=i;
            }
        }
    }
    return second;
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

    int index=secondLargest(arr,n);
    if(index==-1){
        cout<<"Invalid";
    }else{
        cout<<"Second largest"<<arr[index];
    }

}