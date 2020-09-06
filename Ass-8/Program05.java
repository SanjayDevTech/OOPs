import java.util.Scanner;
class GMT {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Input the time zone offset to GMT: ");
        long offset = scanner.nextInt();
        long offsetInMillis = offset*60000;
        long currentInMillis = System.currentTimeMillis();
        long totalInMillis = offsetInMillis+currentInMillis;
        long secs = (totalInMillis/1000);
        long mins = secs/60;
        secs %= 60;
        long hrs = mins/60;
        mins %= 60;
        hrs %=24;
        System.out.println(hrs+":"+mins+":"+secs);
    }
}