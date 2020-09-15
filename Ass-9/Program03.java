import java.util.Scanner;
class Duplicate {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int N = scanner.nextInt();
        int[] array = new int[N];
        int[] countArray = new int[N];
        int[] uniqArray = new int[N];
        int uniqCount = 0;
        System.out.println("Enter the elements");
        for(int i = 0; i < N; i++) {
            array[i] = scanner.nextInt();
        }
        for(int i = 0; i < N; i++) {
            int index = isExists(uniqArray, array[i], uniqCount);
            if(index == -1) {
                uniqArray[uniqCount] = array[i];
                countArray[uniqCount] = 1;
                uniqCount++;
            } else {
                countArray[index] += 1;
            }
        }
        System.out.print("Duplicate elements: ");
        for(int iter = 0; iter < uniqCount; iter++) {
            if(countArray[iter] > 1) {
                System.out.print(uniqArray[iter] + " ");
            }
        }
        System.out.println();

    }
    private static int isExists(int[] array, int key, int to) {
        for(int i = 0; i <= to; i++) {
            if(array[i] == key) {
                return i;
            }
        }
        return -1;
    }
}