interface _Player {
    void play();
}

class Child implements _Player {
    @Override
    public void play() {
        System.out.println("Play is the act of having fun with friends");
    }
}

class Musician implements _Player {
    @Override
    public void play() {
        System.out.println("Play is the act creating music");
    }
}

class Actor implements _Player {
    @Override
    public void play() {
        System.out.println("Play is the act of expressing emotions");
    }
}

public class __12__ {
    public static void main(String[] args) {
        Child child = new Child();
        Musician musician = new Musician();
        Actor actor = new Actor();
        child.play();
        actor.play();
        musician.play();
    }
}
