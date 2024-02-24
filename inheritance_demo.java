class A1 {
    int i;

    void display() {
        System.out.println(i);
    }
}

class B extends A1 {
    int j;

    void display() {
        System.out.println(j);
    }
}

class inheritance_demo {
    public static void main(String[] args) {
        B obj = new B();
        obj.i = 1;
        obj.j = 2;
        obj.display();
    }
}
