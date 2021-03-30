#include <iostream>
#include "stdio.h"
#include <ctime>
#include <climits>
#include <random>

using namespace std;

int random_int(int);
void print_list(const int[]);

int main(){
    
    srand(time(NULL));
    for (int i = 0; i < 10; i++){
        int list[10];
        for(int j = 0; j < 10; j++){
            list[j] = random_int(100);
        }
        cout << "Test "<< i+1 << endl;
        cout << "Unsorted: ";
        print_list(list);

        for(int k = 1; k < 10; k++){
            int x = list[k];
            int y = k - 1;
            while(y >= 0 && list[y] > x){
                list[y + 1] = list[y];
                y--;
            }
            list[y+1] = x;
        }
        cout << "Sorted: ";
        print_list(list);
        cout << endl;
    }

    return 0;
}

void print_list(const int list[]){
    for(int k = 0; k < 10; k++){
        if(k != 9)
            cout << list[k] << ", ";
        else   
        cout << list[k] << endl; 
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
