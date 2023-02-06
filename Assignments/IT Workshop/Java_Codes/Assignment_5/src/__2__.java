interface Player {
    //public, static and final.
    final int movement_speed = 10;

    void speak();
}

public class __2__ implements Player {
    @Override
    public void speak() {
        System.out.println("Hey this is player");
    }

    public static void main(String[] args) {
        __2__ ob = new __2__();
        ob.speak();
        System.out.println("Movement speed : " + movement_speed);
    }
}
