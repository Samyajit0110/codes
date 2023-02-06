abstract class Animal {
    abstract void makeSound();

    abstract void eat();
}

class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Bark");
    }

    @Override
    void eat() {
        System.out.println("Eats pedigree!");
    }
}

public class __1__ extends Dog {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.makeSound();
        dog.eat();
    }
}
