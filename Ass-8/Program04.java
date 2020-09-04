import java.util.Scanner;
class MinsToDays {
    public static void main(String[] args) {
        System.out.print("Input the number of minutes: ");
        Scanner scanner = new Scanner(System.in);
        int mins = scanner.nextInt();
        int yrs, days;
        days = mins/60/24;
        yrs = days/365;
        days %= 365;
        System.out.println(mins+" minutes is approximately "+yrs+" years and "+days+ " days");
    }
}