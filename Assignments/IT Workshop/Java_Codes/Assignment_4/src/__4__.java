class Animal {
    void make_Sound() {
        System.out.println("makes sound");
    }

    void eat() {
        System.out.println("Eats");
    }
}

class Dog extends Animal {
    void make_Sound() {
        System.out.println("Woof");
    }

    void eat() {
        System.out.println("Eats pedigree");
    }
}

class Cat extends Animal {
    void make_Sound() {
        System.out.println("Meow");
    }

    void eat() {
        System.out.println("Eats fish");
    }
}

public class __4__ {
    public static void main(String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();
        dog.make_Sound();
        cat.make_Sound();
    }
}