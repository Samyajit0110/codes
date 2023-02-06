interface Age {
    void age();
}

interface Id {
    void id();
}

public class __3__ implements Age, Id {
    @Override
    public void age() {
        System.out.println("Age is 20");
    }

    @Override
    public void id() {
        System.out.println("Id is 2022");
    }

    public static void main(String[] args) {
        __3__ ob = new __3__();
        ob.age();
        ob.id();
    }
}
