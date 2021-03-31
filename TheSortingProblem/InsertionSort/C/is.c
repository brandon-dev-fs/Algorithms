#include "stdio.h"
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int random_int(int);
void print_list(const int[], int);
void insertion_sort(int[], int);

int main(){
    srand((unsigned)time(NULL));
    for (int i = 0; i < SIZE; i++){
        
        int list[SIZE];
        
        for(int j = 0; j < SIZE; j++)
            list[j] = random_int(100);
        
        printf("Test %d\n", i+1);
        printf("Unsorted: ");
        print_list(list, SIZE);
        printf("Sorted: ");
        insertion_sort(list, SIZE);
        print_list(list, SIZE);
        printf("\n");
    }

    return 0;
}

void print_list(const int list[], int size){
    for(int k = 1; k < size; k++){
        if(k != 9)
            printf("%d, ", list[k]);
        else   
        printf("%d\n", list[k]); 
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
    while (r >= 2147483647 / n * n);
    return r / (2147483647 / n);*/

    return rand() % n;
}
