class ___10__base {
    final void say_hi() {
        System.out.println("Hi from super class");
    }
}

public class __10__ extends ___10__base {
    public static void main(String[] args) {
        __10__ ob = new __10__();
        ob.say_hi();
    }
}