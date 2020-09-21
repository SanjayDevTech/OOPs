import java.util.Scanner;

interface Polygon {
    double area();
}
class Rectangle implements Polygon {
    private double length, breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public double area() {
        return length*breadth;
    }
}
class Circle implements Polygon {
    private double radius;

    Circle(double radius) {
        this.radius = radius;
    }
    public double area() {
        return 3.14*radius*radius;
    }
}
class Main {
    public static void main(String[] args) {
        Rectangle rect;
        Circle cir;
        byte choice;
        Scanner scanner = new Scanner(System.in);
        System.out.println("0 => Rectangle, 1 => Circle");
        System.out.print("Enter the choice: ");
        choice = scanner.nextByte();
        if(choice == 0) {
            System.out.print("Enter the length and breadth: ");
            double length = scanner.nextDouble();
            double breadth = scanner.nextDouble();
            rect = new Rectangle(length, breadth);
            System.out.println("Area => "+rect.area());
        } else if(choice == 1) {
            System.out.print("Enter the radius: ");
            double radius = scanner.nextDouble();
            cir = new Circle(radius);
            System.out.println("Area => "+cir.area());
        } else {
            System.out.println("Invalid option!!!");
        }
    }
}