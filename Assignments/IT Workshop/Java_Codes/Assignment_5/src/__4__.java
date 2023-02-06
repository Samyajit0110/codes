interface employee {
    void salary();
}

interface manager extends employee {
    void position();
}

public class __4__ implements manager {
    @Override
    public void salary() {
        System.out.println("Salary is 80 lpa");
    }

    @Override
    public void position() {
        System.out.println("Position is CEO");
    }

    public static void main(String[] args) {
        __4__ ob = new __4__();
        ob.position();
        ob.salary();
    }
}
