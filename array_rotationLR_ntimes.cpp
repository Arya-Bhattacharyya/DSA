#include<iostream>
#include<vector>
using namespace std;

void rotateLeftNtimes(vector<int>& arr, int rotate){
    int n=arr.size();
    rotate%=n;
    if(rotate==0)return;
    
    for(int i=0;i<rotate;i++){
        int temp= arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
}

void rotateRightNtimes(vector<int>& arr, int rotate){
    int n=arr.size();
    rotate%=n;
    if(rotate==0)return;
    
    for(int i=0;i<rotate;i++){
        int temp= arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
}

int main(){
    int n;
    cout<< "Size of array :";
    cin>>n;

    vector<int> arr(n);
    cout<< "Enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int rotate;
    cout<< "Number of rotations :";
    cin>>rotate;

   char choice;
    do{
    cout<< "Choose(L/R) for rotation :";
    cin>>choice;

    switch (choice)
    {
    case 'L':
            case 'l':
                rotateLeftNtimes(arr, rotate);
                cout << "Left rotation: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 'R':
                rotateRightNtimes(arr, rotate);
                cout << "Right rotation: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
    case 'a':
        cout << "Exiting the program..." << endl;
        break;
    
    default:
        break;
    }
    }while (choice!= 'a');
    
}