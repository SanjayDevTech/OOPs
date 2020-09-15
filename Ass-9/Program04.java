import java.util.Scanner;

class MaxMin {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int N = scanner.nextInt();
        int[] array = new int[N];
        System.out.println("Enter the elements");
        for(int i = 0; i < N; i++) {
            array[i] = scanner.nextInt();
        }
        int max = array[0];
        int min = array[0];
        for(int i = 1; i < N; i++) {
            if(max < array[i]) {
                max = array[i];
            }
            if (min > array[i]) {
                min = array[i];
            }
        }
        System.out.println("Max => "+max+", Min => "+min);

    }    
}
