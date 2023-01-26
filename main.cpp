

#include <iostream>
#include <math.h>

using namespace std;
int num;
void Cube(){
   cout << "Cube of number "<<num<<" is "<<pow(num,3);
}
int main(){
    cout <<"Enter number: ";
    cin >> num;
    Cube();
    return 0;
}