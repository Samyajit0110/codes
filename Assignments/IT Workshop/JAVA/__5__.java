class __5__ {

  void method_1(__5__ object) {
    System.out.println("Method invoked");
  }

  void method_2() {
    method_1(this);
  }

  public static void main(String args[]) {
    __5__ obj =  new __5__();
    obj.method_2();
  }
}
