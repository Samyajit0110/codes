import java.util.Scanner;

class __12__ {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number");
    int n = sc.nextInt();
    if (n % 5 == 0) {
      System.out.println(n + " is divisible by 5");
    }
    else 
    {
      System.out.println(n+" is not divisible by 5");
    }
  }
}
