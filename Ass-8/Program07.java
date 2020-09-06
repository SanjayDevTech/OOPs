import java.util.Scanner;
class Speed {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Input the distance in meters: ");
        float distance = scanner.nextInt();
        System.out.print("Input hour: ");
        int hrs = scanner.nextInt();
        System.out.print("Input minutes: ");
        int mins = scanner.nextInt();
        System.out.print("Input seconds: ");
        int secs = scanner.nextInt();
        long totalSecs = secs+(mins*60)+(hrs*60*60);
        float totalHrs = (float)(totalSecs/3600.0f);
        float kiloMeters = distance/1000.0f;
        float miles = distance/1609.0f;
        System.out.println("Your speed in mtrs/secs is "+(distance/totalSecs));
        System.out.println("Your speed in km/h is "+(kiloMeters/totalHrs));
        System.out.println("Your speed in miles/h is "+(miles/totalHrs));
    }
}