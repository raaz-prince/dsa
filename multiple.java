 interface A {
    void show();
    void draw();
 }

 interface B {
    void show();
     void draw1();
 }

 class C {
    void draw() {
        System.out.println("draw from regular");
    }
 }

 class princek extends C implements A,B 
 {
    public void show() {
        System.out.println("prince");
    }

    public void draw() {
        super.draw();
        System.out.println("draw");
    }

    public void draw1() {
        System.out.println("draw1");
    }
 }
 class multiple {
    public static void main(String[] args) {
        princek p = new princek();
        p.draw();
    }
}