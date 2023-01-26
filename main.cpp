

#include <iostream>

using namespace std;
int k,n;
void Pryamokytnik(){
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            cout <<"*"<<" ";

        }
        cout << endl;

    }


}
int main(){
    cout <<"Enter height N: ";
    cin >> n;
    cout <<"Enter weight K: ";
    cin >> k;
    cout <<endl;
    Pryamokytnik();
    return 0;
}