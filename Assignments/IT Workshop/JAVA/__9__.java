class __9__ {

  static int variable = 10;

  void method() {
    int variable = 20;
    System.out.println(this.variable);
  }

  public static void main(String args[]) {
    __9__ object = new __9__();
    object.method();
  }
}