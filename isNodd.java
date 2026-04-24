import java.util.*;
public class isNodd {
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        System.out.print(n);
        if (n%2!=0){
            System.out.print( " is odd");
        }else{
            System.out.print(" is even");
        }
    }
}
