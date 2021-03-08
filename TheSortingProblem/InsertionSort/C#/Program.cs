using System;

namespace insertionsort
{
    class Program
    {
        static void Main(string[] args)
        {
            int [] testList1 = {5,7,9,2,3,1,0,4,6,8};
            int [] testList2 = {92,23,36,71,0,55,83,18,49,62};
            int [] testList3 = {3,6,-44,-2,5,66,100,-99,5,0,-37,44,21,-5};
            sortProgram(testList1);
            sortProgram(testList2);
            sortProgram(testList3);
        }

        static void sortProgram(int [] list){
            Console.WriteLine("Unsorted List:");
            printList(list);
            insertionsort(ref list);
            Console.WriteLine("Sorted List:");
            printList(list);
            Console.Write("\n"); 
        }

        static void printList(int[] list){
            for(int i = 0; i < list.Length; i++){
                if(i != list.Length - 1) {
                    Console.Write(list[i]);
                    Console.Write(", ");
                }
                else {
                    Console.Write(list[i]);
                }
            }    
            Console.Write("\n");        
        }

        static void insertionsort(ref int[] list){
            for(int i = 0; i < list.Length; i++){
                int key = list[i];
                int j = i - 1;
                while(j >= 0 && list[j] > key){
                    list[j + 1] = list[j];
                    j -= 1;
                }
                list[j+1] = key;
            }
        }
    }
}

