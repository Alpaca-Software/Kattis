import java.util.Scanner;
public class Oddecho {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int number = sc.nextInt();
        
        String words[] = new String[number];
        int n = words.length;
        
        for (int i = 0; i < n; i++) {
            words[i] = sc.next();
        }
        
        for (int i = 1; i <= n; i++) {
            if(i%2 != 0){
                System.out.println(words[i-1]);
            }
        }
    }
}
