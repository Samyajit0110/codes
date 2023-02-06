import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class __13__ {

    String code;
    int price;

    __13__(String c,int p) {

        code = c;
        price = p;
    }

    public static void main(String args[])throws IOException
    {
        __13__[] I = new __13__[5];
        String a;
        int b,total_cost=0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        for(int i=0;i<5;i++) {

            System.out.print("Enter code  for item"+(i+1)+" : ");
            a = br.readLine();
            System.out.print("Enter price for item"+(i+1)+" : ");
            b = Integer.parseInt(br.readLine());
            I[i] = new __13__(a,b);
        }

        System.out.println("Item Code Item Price");
        System.out.println("--------- ----------");
        for(int i=0;i<5;i++)
        {
            System.out.print("\t"+I[i].code);
            System.out.println("\t\t"+I[i].price);
            total_cost = total_cost + I[i].price;
        }
        System.out.print("Total Price = "+total_cost);
    }
}