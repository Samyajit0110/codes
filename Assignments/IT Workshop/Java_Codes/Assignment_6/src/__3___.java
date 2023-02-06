public class __3___ {
    public static void main(String[] args) {
        int number = 10;
//        System.out.println("Without exception handling:");
//        number /= 0;
        System.out.println("Checked exception but not handled");
        try {
            System.out.println(number /= 0);
        } catch (Exception e) {
            System.out.println(e);
        }
        System.out.println("Ckecked exception and handled");
        try {
            System.out.println(number /= 0);
        } catch (Exception e) {
            System.out.println(number /= 10);
        }
    }
}
