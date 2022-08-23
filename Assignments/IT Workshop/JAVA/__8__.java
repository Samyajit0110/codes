import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class __8__ {

  public static void main(String args[]) throws IOException {
    BufferedReader reader = new BufferedReader(
      new InputStreamReader(System.in)
    );
    int input = Integer.parseInt(reader.readLine());
    System.out.println("Input: " + input);
  }
}