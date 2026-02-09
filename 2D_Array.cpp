#include <iostream>
using namespace std;
void Input(int **arr, int n){
   cout<<"Enter the values of the array";
   for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin>>arr[i][j];
    }
   }

}

void display(int **arr, int n){
    cout<<"Displayed Array"<<endl;
    for(int i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j];
        }
    }
}


void sum(int** &arr,int &n){
    int sum = 0;
    for(int i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
    }
}

void transpose(int **&arr, int &n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j];
        }
    }
}



int main()
{
    int n;
    cout<<"Enetr the size n:";
    cin>>n;
    //the array
    int **ptr = new int*[n];
 for(int i = 0; i <n; i++){
    ptr[i] = new int[i];
 }


Input (ptr, n);
display(ptr,n);
sum(ptr, n);

}