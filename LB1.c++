// Задано одновимірний масив А розміру N. Знайти кількість нульових елементів
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    int N; 
    cout << "Enter array's size: ";
    cin >> N;
    int* A = new int[N]; 
    int count = 0;

    cout << "Enter array: ";
    for (int i = 0; i < N; i++) {
        A[i] = rand() % 10;
        if (A[i] == 0) {
            count++;
        }
    }

    ofstream Array("array.txt");
    if (Array.is_open()) {
        for (int i = 0; i < N; i++) {
            Array << A[i] << " ";
        }
        Array.close();
    }

    delete[] A; 

    cout << "Number of zero elements in the array: " << count << endl;

    return 0;
}