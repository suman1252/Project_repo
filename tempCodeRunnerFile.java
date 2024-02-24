/* public class Nptel {
    public static void main(String[] args){
        try{
            int a = 5/0;
        }catch (Exception e){
            catch (ArithmaticException a){

            }
        }
        System.out.println("Programming In Java");
    }
}  */
import java.lang.*;
 public class TreadExtended extends Thread{
    public void run(){
        System.out.println("\n Thread is rinnung now \n");
    }
    public static void main(String[] args){
        TreadExtended TreadE = new TreadExtended();
        TreadE.start();
    }
}