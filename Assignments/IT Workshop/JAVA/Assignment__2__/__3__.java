class __3__ {

  public static void main(String args[]) {
    int array[] = { 1, 2, 3, 9, 8, 7, 4, 5, 6, 7, 6, 0 };
    int i, sum = 0;
    for (i = 0; i < 12; i++) {
      if (array[i] % 2 == 0) {
        sum += array[i];
      }
    }
    System.out.println("Sum: " + sum);
  }
}
