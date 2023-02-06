interface __Age {
    void age();
}

interface __Id {
    void id();
}

public class __5__ implements __Age, __Id {
    @Override
    public void age() {
        System.out.println("__Age is 20");
    }

    @Override
    public void id() {
        System.out.println("__Id is 2022");
    }

    public static void main(String[] args) {
        __5__ ob = new __5__();
        ob.age();
        ob.id();
    }
}
