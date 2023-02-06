class __3__ {

  void method_1() {
    System.out.println("heyo");
  }

  void method_2() {
    this.method_1();//same as method_1()
    System.out.println("heyo from method 2");
  }

  public static void main(String args[]) {
    __3__ obj = new __3__();
    obj.method_2();
  }
}