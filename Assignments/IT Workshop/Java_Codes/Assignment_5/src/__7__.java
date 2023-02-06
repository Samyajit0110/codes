class Super_no_parameter {
    Super_no_parameter() {
        System.out.println("This is from super class's default parameter");
    }
}

public class __7__ extends Super_no_parameter {
    __7__() {
        super();
    }

    public static void main(String[] args) {
        __7__ ob = new __7__();
    }
}
