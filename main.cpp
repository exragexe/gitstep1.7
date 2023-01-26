#include <iostream>

using namespace std;
const int size = 5;
int arr[size];

void reverseArray(int arr[],int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    cout <<"Enter numbers: ";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    reverseArray(arr,size);
    cout<<"Reversed array: ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    return 0;
}