interface Car {
    int basePrice = 1000;
}

public class InterfaceTest2 implements Car {
    void changePrice() {
        basePrice = 2000;
        System.out.print(basePrice);
    }

    public static void main(String[] args) {
        new InterfaceTest2().changePrice();
    }
}