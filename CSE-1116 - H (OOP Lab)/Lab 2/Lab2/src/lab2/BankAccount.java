package lab2;

public class BankAccount {
    public String name;
    public String id;
    public double balance;
   
    public BankAccount (String name, String id, double amount)
    {
        this.name = name;
        this.id = id;
        balance = amount;
    }
   
    public BankAccount(){
        name = "";
        id = "";
        balance = 0; 
    }
    
// Methods
public void deposit(double amount){
    balance = balance + amount;
}
public void withdraw(double amount){
    if (amount<balance)
    balance -= amount;
}
}