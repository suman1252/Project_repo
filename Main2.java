class Vehicle {
    public void move() {
        System.out.println("The vehicle moves");
    }
}

class Car extends Vehicle {
    public void move() {
        System.out.println("The car moves");
    }
}

public class Main2 {
    public static void main(String[] args) {
        Vehicle vehicle = new Car();
        vehicle.move();
    }

}