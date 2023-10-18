import java.util.*;

 class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String word = sc.next();


        boolean covid = word.contains("COV");

        if (covid) {
            System.out.println("Veikur!");
        } else {
            System.out.println("Ekki veikur!");
        }
    }
    
    

}