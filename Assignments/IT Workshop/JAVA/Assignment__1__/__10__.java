class __10__ {

  static void leap_year(int year) {
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
      System.out.println(year + " is a leap year");
    } else {
      System.out.println(year + " is not a leap year");
    }
  }

  public static void main(String args[]) {
    leap_year(2000);
    leap_year(2003);
    leap_year(2012);
  }
}