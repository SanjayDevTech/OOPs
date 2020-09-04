import java.util.Scanner;
class InchToMtrs {
    public static void main(String[] args) {
        System.out.print("Input a value for inch: ");
        Scanner scanner = new Scanner(System.in);
        float inch = scanner.nextFloat();
        System.out.println(inch+" inch is "+(inch*0.0254f)+" meters");
    }
}