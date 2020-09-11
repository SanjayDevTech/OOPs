import java.util.Scanner;
class Sorting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the length of array: ");
        int N = scanner.nextInt();
        int[] array = new int[N];
        System.out.println("Enter the elements");
        for(int i = 0; i < N; i++) {
            array[i] = scanner.nextInt();
        }
        System.out.print("Sort in Ascending or Descending? a/d: ");
        char choice = scanner.next().charAt(0);
        switch(choice) {
            case 'a':
                sortAscending(array);
                break;

            case 'd':
                sortDescending(array);
                break;
            
            default:
                System.out.println("Invalid option");
        }
        print(array);
    }
    private static void print(int[] array) { 
        System.out.print("[ ");
        for(int i : array) {
            System.out.print(i+" ");
        }
        System.out.println("]");
    }
    private static void swap(int[] array, int first, int second) {
        int temp = array[first];
        array[first] = array[second];
        array[second] = temp;
        
    }
    private static void sortAscending(int[] array) {
        int size = array.length;
        for(int pass = 0; pass < size; pass++) {
            for(int comp = 1; comp < (size-pass); comp++) {
                if(array[comp-1] > array[comp]) {
                    swap(array, comp-1, comp);
                }
            }
        }
        
    }
    private static void sortDescending(int[] array) {
        int size = array.length;
        for(int pass = 0; pass < size; pass++) {
            for(int comp = 1; comp < (size-pass); comp++) {
                if(array[comp-1] < array[comp]) {
                    swap(array, comp-1, comp);
                }
            }
        }
    }
}