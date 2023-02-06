import java.util.*;

class __11__ {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter percentage");
    int n = sc.nextInt();
    if (n >= 90) System.out.println("Grade A"); else if (
      n >= 80
    ) System.out.println("Grade B"); else if (n >= 70) System.out.println(
      "Grade C"
    ); else if (n >= 60) System.out.println("Grade D"); else if (
      n >= 40
    ) System.out.println("Grade E"); else if (n < 40) System.out.println(
      "Grade F"
    );
  }
}
