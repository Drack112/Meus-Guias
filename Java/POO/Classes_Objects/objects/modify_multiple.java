package POO.Classes_Objects.objects;

public class modify_multiple {
    int x = 5;

    public static void main(String[] args) {
        modify_multiple myObj1 = new modify_multiple();
        modify_multiple myObj2 = new modify_multiple();
        // Modificar apenas o objeto 2
        myObj2.x = 25;
        System.out.println(myObj1.x);
        System.out.println(myObj2.x);
    }
}
