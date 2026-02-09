# 📌 Dynamic 2D Array Using Pointers in C++

This project demonstrates how to create and manipulate a **dynamic 2D array using pointers in C++**.  
It covers important concepts like **dynamic memory allocation, pointer-to-pointer arrays, input/output functions, and matrix operations**.

---

## 🚀 Features

- Dynamic 2D array creation using `new`
- User input for matrix values
- Display matrix elements
- Calculate sum of all elements
- Basic matrix transpose logic (demo)
- Modular programming using functions

---

## 🧠 Concepts Used

- Pointers and Double Pointers (`int **`)
- Dynamic Memory Allocation
- Functions with Reference Parameters
- Nested Loops
- Matrix Operations

---

## 📂 Source Code

```cpp
#include <iostream>
using namespace std;

void Input(int **arr, int n){
    cout << "Enter the values of the array:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
}

void display(int **arr, int n){
    cout << "Displayed Array:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void sum(int **arr, int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            total += arr[i][j];
        }
    }
    cout << "Sum of elements: " << total << endl;
}

int main(){
    int n;
    cout << "Enter the size n: ";
    cin >> n;

    // Dynamic 2D Array Allocation
    int **ptr = new int*[n];
    for(int i = 0; i < n; i++){
        ptr[i] = new int[n];
    }

    Input(ptr, n);
    display(ptr, n);
    sum(ptr, n);

    return 0;
}
