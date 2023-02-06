class __2__ {

  __2__() {
    System.out.println("This is the default constructor");
  }

  __2__(int n) {
    System.out.println("This is from parameterized constructor: parameter : " + n);
  }

  public static void main(String args[]) {
    __2__ obj = new __2__();
    __2__ obj2 = new __2__(8);
  }
}
