package lab2.pkg1;

public class Lab21 {

    public static void main(String[] args) {
      
      employee a = new employee("John Doe","177013",1000);
              
     System.out.println(
             "Salary of:"+a.name+"\n"+
                     "ID:"+a.id+"\n"+
                     "Before Increment is: "+a.salary
     );
      
      a.increament(10);
     
     System.out.println(
             "after increment is: "+a.salary
     );
    }
}
