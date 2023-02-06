class Base {
    void sayName() {
        System.out.println("This is from super class ");
    }
}

public class __6__ extends Base {
    @Override
    void sayName() {
        super.sayName();
    }

    public static void main(String[] args) {
        __6__ ob = new __6__();
        ob.sayName();
    }
}
