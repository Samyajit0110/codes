public class __4__ {
    public static void main(String[] args) {
        try {
            int i = 0;
            int result = 10 / i;
        } catch (ArithmeticException ae) {
            System.out.println(ae);
        } catch (Exception e) {
            System.out.println("other exception occurred");
            System.out.println(e);
        }
    }
}
