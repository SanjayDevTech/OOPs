import java.util.Scanner;
class Digits {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Input six non-negative digits: ");
        int number = scanner.nextInt();
        int duplicate = 0;
        while(number != 0) {
            duplicate = (duplicate*10) + (number%10);
            number /= 10;
        }
        while(duplicate != 0) {
            System.out.print(" "+duplicate%10);
            duplicate /= 10;
        }
        System.out.println();
    }
}