class A {
    void message() {
        System.out.println("From A");
    }
}

class B extends A {
    void message() {
        System.out.println("From B");
    }
}

class C extends A {
    void message() {
        System.out.println("From C");
    }
}

public class __8__ {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        C c = new C();
        A reference;
        reference = a;
        reference.message();
        reference = b;
        reference.message();
        reference = c;
        reference.message();
    }
}