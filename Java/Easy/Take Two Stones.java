import java.util.*;
class Impar {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        
        if(number % 2 == 0){
             System.out.println("Bob");
        }else{
           System.out.println("Alice");
        }
    }
    
}