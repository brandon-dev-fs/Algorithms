# Insertion Sort

Insertion sort is a basic O(n^2) algortithm that sorts values similar to how people sort cards.

The algorithm will take takes the next cards and compares it to all other cards before it until its place is found. 
Then the next card after that will be chosen and its location searched for. 

### Pseudocode

```
InsertionSort(A)
for i = 1 to A.length
    k = A[i]
    j = i - 1
    while j >= 0 and A[j] > k
        A[j + 1] = A[j]
        j = j - 1
    A[j + 1] = k
```

> Assumptions
>   -Arrays are 0 indexed
