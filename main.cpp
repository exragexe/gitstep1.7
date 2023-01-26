

#include <iostream>
using namespace std;

void True_false(){
    const int size = 5;
    int arr[size];
    int max,min;
    min = arr[0];
    for (int i = 1; i <= size; ++i) {
        cin>> arr[i];
        if (i == 0 ) {
            min = max = arr[i];
        }

        if(max< arr[i]){
            max =arr[i];
        }
        if(min > arr[i]){
            min =arr[i];
        }

    }
    cout << "Max is "<< max<< endl;
    cout << "Min is "<< min;

}
int main(){
    cout <<"Enter numbers: ";
    True_false();
    return 0;
}