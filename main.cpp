

#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;
void Exercise() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int size = 10;
    int arr[5][10];
    int arr2[5][5];

    srand(time(0));
    SetConsoleTextAttribute(hConsole, 10);
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            arr[i][j] = rand() % 50;

            cout << arr[i][j]<<" ";

        }

        cout << endl;


    }
    cout << endl;


    SetConsoleTextAttribute(hConsole, 4);
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            arr2[i][j] = arr[i][j] + arr[i][j + 2];


            cout << arr2[i][j] << " ";

        }
        cout << endl;

    }
    cout << endl;




}
int main() {
    Exercise();
    return 0;
}