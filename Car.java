interface Car {
    intt basePrice = 1000;
}

public class InterfaceTest2 implements Car {
    void changePrice() {
        basePrice = 2000;
       System.out.println(basePrice); 
    }
    public static void main(String[] args){
        new interfaceTest2().changePrice();
    }
}