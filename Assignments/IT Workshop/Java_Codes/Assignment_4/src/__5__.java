class eat {
    void digest() {
        System.out.println("Digesting");
    }
}

class Sleep extends eat {
    @Override
    void digest() {
        super.digest();
    }

    void nap() {
        System.out.println("Starts sleeping");
    }
}

public class __5__ extends Sleep {
    public static void main(String[] args) {
        Sleep sleep = new Sleep();
        sleep.digest();
        sleep.nap();
    }
}