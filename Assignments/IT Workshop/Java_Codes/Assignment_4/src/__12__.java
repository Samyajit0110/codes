public class __12__ {

    double numerator,denominator;

    __12__ (int a, double b) {

        numerator=a;
        denominator=b;
    }

    __12__ (int x, int y) {

        numerator=x;
        denominator=y;
    }

    __12__(double m, double n) {

        numerator=m;
        denominator=n;
    }

    void display() {
        double fraction=numerator/denominator;
        System.out.println ("Fraction = "+fraction);
    }
    public static void main(String[] args) {

        __12__ f1 = new __12__(12,12.3);
        f1.display();

        __12__ f2 = new __12__(10,12);
        f2.display();

        __12__ f3 = new __12__(10.5,13.5);
        f3.display();
    }
}