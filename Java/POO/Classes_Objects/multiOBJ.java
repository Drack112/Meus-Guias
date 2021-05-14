package POO.Classes_Objects;

public class multiOBJ {
    int x = 5;

    public static void main(String[] args) {
        multiOBJ myObj1 = new multiOBJ();
        multiOBJ myObj2 = new multiOBJ();
        // Dois objetos com o mesmo valor
        System.out.println(myObj1.x);
        System.out.println(myObj2.x);
    }
}
