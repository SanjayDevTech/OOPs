import java.util.Scanner;

class Rectangle {
    private int length, breadth;
    public Rectangle(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int length, breadth;
        System.out.print("Enter the length and breadth: ");
        length = scanner.nextInt();
        breadth = scanner.nextInt();
        Rectangle rect = new Rectangle(length, breadth);
        System.out.println("Area => "+rect.getArea());
    }
    public int getArea() {
        return length*breadth;
    }
}