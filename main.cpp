

#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

void Exercise() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int sum=0;
    double avg = 0;
    srand(time(0));
    const int size = 10;
    int arr[size][size];
    int min, max;
    min = arr[0][0];

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            SetConsoleTextAttribute(hConsole, 10);
            arr[i][j] = -100+rand() %+ 200;
            sum += arr[i][j];
            cout << arr[i][j] << " ";

            if (i == 0 && j == 0) {
                min = max = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        cout << endl;
    }
    SetConsoleTextAttribute(hConsole, 15);
    cout << "====================" << endl;
    avg = sum / (size * size);
    cout << "Suma: " << sum<< endl;
    cout << "AVG: " << avg << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "====================" ;
}

int main()
{
    Exercise();
    return 0;
}