class test {

  __6__ obj;

  test(__6__ obj) {
    this.obj = obj;
  }

  void display() {
    System.out.println(obj.data); 
  }
}

class __6__ {

  int data = 10;

  __6__() {
    test object_test = new test(this);
    object_test.display();
  }

  public static void main(String args[]) {
    __6__ a = new __6__();
  }
}