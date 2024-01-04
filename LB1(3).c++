/*Задано масив дійсних чисел A(n), n <= 200. Розробити програму, яка будує масив B(n) за правилом: 
bi є середнім арифметичним значенням чисел a1, a2, ... , an, крім ai, i = 1, 2, ... , n.*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    do {
        cout << "Enter array's size less than 200: ";
        cin >> n;
        if (n >= 200) {
            cout << "Try again" << endl;
        }
    } while (n >= 200);

    vector<int> A;
    vector<float> B;
    
    cout << "Enter array: ";
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        A.push_back(a); 
    }

    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
    }
    
    for (int i = 0; i < n; i++) {
        B.push_back((sum - A[i]) / (n - 1)); 
    }

    cout << "Array B:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << B[i] << " ";
    }

    return 0;
}

