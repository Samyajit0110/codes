class Factorial {

  static int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
      f *= i;
    }
    return f;
  }
}

class __5__ {

  public static void main(String args[]) {
    int n = 6;
    Factorial object = new Factorial();
    System.out.println("Factorial of 6 : "+(object.fact(n)));
  }
}
