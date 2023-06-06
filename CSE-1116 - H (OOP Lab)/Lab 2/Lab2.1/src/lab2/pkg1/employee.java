package lab2.pkg1;

public class employee {
    public String name;
    public String id;
    public double salary;
    public double percentage;
   
    public employee (String name, String id, double amount)
    {
        this.name = name;
        this.id = id;
        salary = amount;
    }
   
    public employee(){
        name = "";
        id = "";
        salary = 0; 
    }
public void increament (double percentage){
    salary = salary + (salary * percentage) / 100;
}
}
