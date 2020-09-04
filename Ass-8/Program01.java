import java.util.Scanner;
class FTC {
    public static void main(String[] args) {
        System.out.print("Input a degree in Fahrenheit: ");
        Scanner scanner = new Scanner(System.in);
        float fah = scanner.nextFloat();
        System.out.println(fah+" degree Fahrenheit is equal to "+toCelsius(fah)+ " in Celsius");
    }

    private static float toCelsius(float fah) {
        return (fah-32)*(5f/9);
    }
}