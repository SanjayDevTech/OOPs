import java.util.Scanner;
class SumOfDigits {
    public static void main(String[] args) {
        System.out.print("Input a integer between 0 and 1000: ");
        Scanner scanner = new Scanner(System.in);
        short num = scanner.nextShort();
        short dup = num;
        byte sum = 0;
        while(num != 0) {
            sum += num%10;
            num /= 10;
        }
        System.out.println("The sum of all digits in "+dup+" is "+sum);
    }
}