import java.util.*;

class Saman {

    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);
        
        int word = sc.nextInt();
        int wordTwo = sc.nextInt();
        
        int total = 0;
        if(word>0 && wordTwo >0){
            total = word+wordTwo;
            System.out.println(total);
        }
    }
}