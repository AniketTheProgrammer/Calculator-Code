import java.util.Scanner;

class cal {

    static int cal(int a, char b, int c) {
        switch (b) {
            case '+':
                return (a + c);
            case '-':
                return (a - c);
            case '*':
                return (a * c);
            case '/':
                return (a / c);
            default: 
                return 0;    
        }
    }

    public static void main(String[] arg) {
        System.out.println("Hello.......");
        Scanner sc = new Scanner(System.in);
        int a , c , result = 0;
        char b;
        a = sc.nextInt();
        b = sc.next().charAt(0);
        c = sc.nextInt();
        result = cal(a , b , c);
        System.out.println("------");
        System.out.println(result);
        while(true){
            b = sc.next().charAt(0);
            c = sc.nextInt();
            result = cal(result , b , c);
            System.out.println("------");
            System.out.println(result);

        }

    }
}
