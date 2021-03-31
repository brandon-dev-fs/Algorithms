#include <iostream>
#include "stdio.h"
#include <ctime>
#include <climits>
#include <random>
using namespace std;

#define SIZE 10

int random_int(int);
void print_list(const int[], int);
void insertion_sort(int[], int);

int main(){
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++){
        
        int list[SIZE];
        
        for(int &j : list)
            j = random_int(100);
        
        cout << "Test "<< i+1 << endl;
        cout << "Unsorted: ";
        print_list(list, SIZE);
        cout << "Sorted: ";
        insertion_sort(list, SIZE);
        print_list(list, SIZE);
        cout << endl;
    }

    return 0;
}

void print_list(const int list[], int size){
    for(int k = 1; k < size; k++){
        if(k != 9)
            cout << list[k] << ", ";
        else   
        cout << list[k] << endl; 
    }
}

void insertion_sort(int list[], int size){
        for(int k = 1; k < size; k++){
        int x = list[k];
        int y = k - 1;
        while(y >= 0 && list[y] > x){
            list[y + 1] = list[y];
            y--;
        }
        list[y+1] = x;
    }
}

int random_int(int n){
    /*int r;
    if(n <= 0)
        return 0;

    do
    {
        r = rand();
    }
    while (r >= INT_MAX / n * n);
    return r / (INT_MAX / n);*/

    return rand() % n;
}
