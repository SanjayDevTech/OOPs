import java.util.Scanner;
import java.lang.Math;
class Number {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Input a number: ");
        int number = scanner.nextInt();
        System.out.printf("Square: %.2f\n", Math.pow(number, 2));
        System.out.printf("Cube: %.2f\n", Math.pow(number, 3));
        System.out.printf("Fourth power: %.2f\n", Math.pow(number, 4));
    }
}