

#include <iostream>
using namespace std;
int num,num2;
void Max(){
    if (num>num2){
        cout << num <<" more then "<< num2;
    }
    else if(num2>num){
        cout <<num2 <<" more then "<< num;
    }
    else {
        cout << num <<" = "<< num2;
    }
}
int main(){
    cout <<"Enter first number: ";
    cin >> num;
    cout <<"Enter second number: ";
    cin >> num2;
    Max();
    return 0;
}