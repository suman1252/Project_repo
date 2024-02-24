/* class Parent {
    String name = "parent";

    String message() {
        return "from parent";
    }
}

class Child extends Parent {
    String name = "child";

    String message() {
        return "from child";
    }
}

public class Main1 {
    public static void main(String[] args) {
        Parent p = new Child();
        System.out.println(p.name + " " + p.message());
    }
}  */


/* 
class Vehicle{
    public void move(){
        System.out.println("The vehicle moves");
    }
}
class Car extends Vehicle{
    public void move(){
        System.out.println("The car moves");
    }
}
public class Main1{
    public static void main(String[] args){
        Vehicle vehicle = new Car();
        vehicle.move();
    }
    
}   */

import static java.lang.System.*;
class ProgrammingInJava{
    public static void main(String[] args){
        out.println("Welcome!");
    }
}