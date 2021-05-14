package Basic.Vars;

public class escopo {
    public static void main(String[] args) {
        int x;

        if(true){
            x=10;
        }else{
            x=2;
        };

        System.out.println(x);
    }
}
