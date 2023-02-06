class __4__ {

  __4__() {
    System.out.println("Hello from default constructor");
  }

  __4__(int n) {
    this();
    System.out.println(n);
  }

  public static void main(String args[]) {
    __4__ obj = new __4__(10);
  }
}
