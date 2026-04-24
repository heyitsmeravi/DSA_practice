import java.util.*;
class Calculator {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the first Number: ");
        int a=sc.nextInt();
        System.out.println("Enter the second Number: ");
        int b=sc.nextInt();
        System.out.println("Choose the operator: (+,-,*,/) ");
        String Op=sc.next();
        switch(Op){
            case ("+"):
                System.out.print("Sum is :");
                System.out.println(a+b);
                break;
            case ("-"):
                System.out.print("Difference is :");
                System.out.println(a-b);
                break;
            case ("*"):
                System.out.print("Product is :");
                System.out.println(a*b);
                break;
            case ("/"):
                System.out.print("Quotient is :");
                System.out.println(a/b);
                break;
            default:
                System.out.println("Invalid Choice!!");
        }
        
    }
}
