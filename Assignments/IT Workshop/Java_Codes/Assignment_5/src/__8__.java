class Super_parameter {
    Super_parameter() {
    }

    Super_parameter(int x) {
        System.out.println(x + " from super class");
    }
}

public class __8__ extends Super_parameter {
    __8__() {
    }

    __8__(int x) {
        super(x);
    }

    public static void main(String[] args) {
        __8__ ob = new __8__(10);
    }
}
