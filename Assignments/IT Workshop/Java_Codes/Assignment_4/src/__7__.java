class Joker {
    void cards() {
        System.out.println("Joker card");
    }
}

public class __7__ extends Joker {
    @Override
    void cards() {
        System.out.println("Not the joker one lah");
    }

    public static void main(String[] args) {
        __7__ object = new __7__();
        object.cards();
    }
}
