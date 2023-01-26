



#include <iostream>
using namespace std;
int num, other=1000,res;
void Simple_num(){
    for (int i = other; i >1 ; --i) {
        if(num % i == 0 && num % 1 ==0){
            res+=1;
        }
    }
    if(res == 1){
        cout << "Number is simple";
    }
    else{
        cout <<"Number is not simple";
    }
}
int main(){
    cout <<"Enter number: ";
    cin >> num;
    Simple_num();
    return 0;
}