package POO.contrusctor;

public class constructor {
    private int x;

    // Setar o construtor
    public constructor(int y) {
        x = y;
      }
    
    public static void main(String[] args) {
        // x = 5
        constructor myObj = new constructor(5);
        System.out.println(myObj.x);
    }
}
