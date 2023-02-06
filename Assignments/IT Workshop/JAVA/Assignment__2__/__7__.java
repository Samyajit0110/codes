class __7__ {

  static int add_ten(int n) {
    n += 10;
    return n;
  }

  static void add_ten_to_array(int array[], int length) {
    for (int i = 0; i < length; i++) {
      array[i] += 10;
    }
  }

  public static void main(String args[]) {
    int added_by_ten = add_ten(10);
    System.out.println("Called ny value : "+added_by_ten);
    int main_array[] = {1,2,3,4,5,6,7,8,9,10};
    add_ten_to_array(main_array,10);
    System.out.println("by implimenting Call by reference ");
    for(int i = 0;i<10;i++)
    {
        System.out.print(main_array[i]+" ");
    }
  }
}
