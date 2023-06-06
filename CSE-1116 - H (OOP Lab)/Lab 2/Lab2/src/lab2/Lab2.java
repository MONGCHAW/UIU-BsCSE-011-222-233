package lab2;

public class Lab2 {

    public static void main(String[] args) {
        
        BankAccount a = new BankAccount("Anuv","343",0);
        BankAccount b = new BankAccount();

        
        b.name = "Jenny";
        b.id = "454";
        b.balance = 200;
        
        a.deposit(500);
        b.withdraw(400);
        
        System.out.println("The Balance of A =" + a.balance + "and of B=" + b.balance);
             
                
   } 
}
