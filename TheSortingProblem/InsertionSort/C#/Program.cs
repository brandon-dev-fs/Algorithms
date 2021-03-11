using System;

namespace insertionsort
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int x = 0; x < 10; x++){
                int [] test = new int [25];
                var rand = new Random(x);
                for (int y = 0; y < test.Length; y++){
                    test[y] = rand.Next(-101,101);
                }
                Console.WriteLine("Test "+(x+1)+": ");
                sortProgram(test);
            }
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
            for(int i = 1; i < list.Length; i++){
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
