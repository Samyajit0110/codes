public class ErrorHandling {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        try {
            int div_by_zero = a / b;
        } catch (Exception e) {
            System.out.println("Handled exception");
        }
    }
}
