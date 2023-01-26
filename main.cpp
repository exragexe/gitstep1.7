

#include <iostream>
using namespace std;
int num;
void True_false(){
    if (num<0){
        cout << "False";
    }
    else if(num>=1){
        cout << "True";
    }
    else {
        cout << "0 is not natural number";
    }
}
int main(){
    cout <<"Enter number: ";
    cin >> num;
    True_false();
    return 0;
}