/*Знайти номер останнього максимального значення серед від’ємних елементів, 
розташованих правіше елемента, рівного Т*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int N; 
    cout << "Enter array's size: ";
    cin >> N;
     int* A = new int[N];
    cout << "Enter array: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    ofstream Array("array.txt");
    if (Array.is_open()) {
        for (int i = 0; i < N; i++) {
            Array << A[i] << " ";
        }
        Array.close();
    }
    int T, T_index;
    cout << "Enter T: ";
    cin >> T;
    int maxNegative, lastIndex=0;
    for (int i = 0; i < N; i++) {
        if (A[i]<0){
        maxNegative=A[i];
        break;}
        } 
        
    for (int i = 0; i < N; i++) {
        if (A[i] == T) {
            T_index = i;
            }  
        }
    for (int i = T_index; i < N; i++) {
        if (A[i] < 0) {
            if (A[i] > maxNegative) {
                maxNegative = A[i];
                lastIndex = i;
            } else if (A[i] == maxNegative) {
                lastIndex = i;
            }
        }

    }

    if (lastIndex != 0) {
        cout << "Index of max negative element: " << lastIndex << endl;
    } 
    else {
        cout<< "There is no negative elements or max negative element";
    }
    delete[] A;

    return 0;
}
