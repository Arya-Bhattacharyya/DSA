#include<iostream>
using namespace std;

void reversearr(int arr[], int n){
    for (int i = n ; i >= 1; i--)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    cout << "Enter the array size: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements " << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // printing the array in the correct order
    cout << "Printing the array in the original order" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    // printing the array in the reverse order
    cout << "\nPrinting the array in the reversed order" << endl;
    reversearr(arr,n);
}