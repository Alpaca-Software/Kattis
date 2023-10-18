import java.util.*;
class Katti {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        //s = (r1+r2)/2
        // s*2-r1 = r2
        
        int r1 = sc.nextInt();
         int S = sc.nextInt();
        
        int r2 = S*2-r1;
        
        System.out.println(r2);
    }
}
