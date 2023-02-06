class __6__ {

  public static void main(String[] args) {
    int n = Integer.parseInt(args[0]);
    int fact = 1;
    for (int i = 1; i <= n; i++) {
      fact *= i;
    }
    System.out.println("Factorial of 6 : " + fact);
  }
}
