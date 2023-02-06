class test {

  test getTest() {
    return this;
  }

  void msg() {
    System.out.println("Hello java");
  }
}

class __7__ {

  public static void main(String args[]) {
    new test().getTest().msg();
  }
}
