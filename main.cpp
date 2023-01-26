

#include <iostream>
using namespace std;
int formula=1,num;
void Factorial(){
    for (int i = num; i > 1; --i) {

        formula *= i;
        cout << " * "<< i-1;
    }
    cout <<" = "<< formula;
}
int main(){
    cout <<"Enter factorial number: ";
    cin >> num;
    cout <<num<<"! = "<<num;
    Factorial();
    return 0;
}