import java.util.Scanner;

class Point {
    int x;
    int y;

    Point() {
    }

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

class Circle extends Point {
    void area() {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter x and y of centre");
        int x = sc.nextInt();
        int y = sc.nextInt();
        Point centre = new Point(x, y);
        System.out.println("Enter x and y of circumference");
        x = sc.nextInt();
        y = sc.nextInt();
        Point circumference = new Point(x, y);
        double radius = Math.sqrt(((Math.pow(circumference.x - centre.x, 2)) + (Math.pow(circumference.y - centre.y, 2))));
        double _area = 3.14 * ((radius * radius));
        System.out.println("Area = " + _area);
    }
}

public class __10__ {
    public static void main(String[] args) {
        Circle crcl = new Circle();
        crcl.area();
    }
}
