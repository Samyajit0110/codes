import java.io.*;

abstract class threeDObject {

  public abstract void calc_area();

  public abstract void calc_volume();

  final float pi = 3.14f;
}

class Cone extends threeDObject {

  double h, r, area, volume;

  public void accept() throws IOException {
    System.out.println("Enter radius and height of the Cone: ");
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    r = Double.parseDouble(br.readLine());
    h = Double.parseDouble(br.readLine());
  }

  public void calc_area() {
    double sq = h * h + r * r;
    area = pi * r * (r + java.lang.Math.sqrt(sq));
  }

  public void calc_volume() {
    double d = h / 3;
    volume = pi * r * r * d;
  }

  public void display() {
    calc_area();
    calc_volume();
    System.out.println("The area of Cone is: " + area);
    System.out.println("The volume of Cone is: " + volume);
  }
}

class Cylinder extends threeDObject {

  double r, h, area, volume;

  public void accept() throws IOException {
    System.out.println("Enter radius and height of the Cylinder: ");
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    r = Double.parseDouble(br.readLine());
    h = Double.parseDouble(br.readLine());
  }

  public void calc_area() {
    area = (2 * pi * r * h) + (2 * pi * r * r);
  }

  public void calc_volume() {
    volume = pi * r * r * h;
  }

  public void display() {
    calc_area();
    calc_volume();
    System.out.println("The area of Cylinder is: " + area);
    System.out.println("The volume of Cylinder is: " + volume);
  }
}

class Box extends threeDObject {

  double l, b, h, area, volume;

  public void accept() throws IOException {
    System.out.println("Enter length, breadth and height of the Box: ");
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    l = Double.parseDouble(br.readLine());
    b = Double.parseDouble(br.readLine());
    h = Double.parseDouble(br.readLine());
  }

  public void calc_area() {
    area = (2 * l * b) + (2 * b * h) + (2 * l * h);
  }

  public void calc_volume() {
    volume = l * b * h;
  }

  public void display() {
    calc_area();
    calc_volume();
    System.out.println("The area of Box is: " + area);
    System.out.println("The volume of Box is: " + volume);
  }
}

public class __10__ {

  public static void main(String[] args) throws IOException {
    Cone co = new Cone();
    co.accept();
    co.display();
    Cylinder cy = new Cylinder();
    cy.accept();
    cy.display();
    Box b = new Box();
    b.accept();
    b.display();
  }
}
