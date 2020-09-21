import java.util.Scanner;

class Marks {
    double marks;
    Marks(double d) {
        marks = d;
    }
    void print() {
        System.out.println("Marks => "+marks);
    }
}
class Physics extends Marks {
    Physics(double d) {
        super(d);
    }
    void print() {
        System.out.println("Physics => "+marks);
    }
}
class Chemistry extends Marks {
    Chemistry(double d) {
        super(d);
    }
    void print() {
        System.out.println("Chemistry => "+marks);
    }
}
class Mathematics extends Marks {
    Mathematics(double d) {
        super(d);
    }
    void print() {
        System.out.println("Mathematics => "+marks);
    }
}
class Main {
    public static void main(String[] args) {
        int start = 1901201;
        System.out.print("Enter the strength of students: ");
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        Marks[][] marks = new Marks[N][3];
        String[] names = new String[N];
        int[] rollNos = new int[N];
        double[] avgMarks = new double[N];
        for(int iter = 0; iter < N; ++iter) {
            System.out.println("Enter th student "+(iter+1)+" details");
            System.out.print("Enter the name: ");
            rollNos[iter] = start++;
            names[iter] = input.next();
            System.out.print("Enter the physics, chemistry and maths marks: ");
            double physicsMark = input.nextDouble();
            double chemMark = input.nextDouble();
            double mathsMark = input.nextDouble();
            marks[iter][0] = new Physics(physicsMark);
            marks[iter][1] = new Chemistry(chemMark);
            marks[iter][2] = new Mathematics(mathsMark);
            avgMarks[iter] = (physicsMark+chemMark+mathsMark)/3.0;
        }
        System.out.println("====== PRINTING ======");
        for(int iter = 0; iter < N;++iter) {
            System.out.println("Student "+(iter+1)+" Details");
            System.out.println("Name => "+ names[iter]+"\nRollNo => "+rollNos[iter]);
            marks[iter][0].print();
            marks[iter][1].print();
            marks[iter][2].print();
            System.out.println("Avg => "+ avgMarks[iter]+"\n");
        }
        
    }
}