

#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

void Exercise() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int sum=0;

    int sumrow = 0;
    int sumstowp = 0;
    double avg = 0;
    srand(time(0));
    const int size = 10;
    int arr[size][size];
    int formula;

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            SetConsoleTextAttribute(hConsole, 10);
            arr[i][j] = rand() %10;
            sum += arr[i][j];

            cout << arr[i][j]<<" ";

        }
        for (size_t k = 0; k < size; k++)
        {
            sumrow += arr[i][k];

        }
        cout << "          |"<< sumrow;
        sumrow = 0;
        cout << endl;
    }
    cout << "-----------------------------------" << endl;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t g = 0; g < size; g++)
        {
            sumstowp += arr[g][i];
        }
        cout << sumstowp << " ";
        sumstowp = 0;
    }
    cout << "|"<< sum << endl;
    SetConsoleTextAttribute(hConsole, 15);
}

int main()
{
    Exercise();
    return 0;
}