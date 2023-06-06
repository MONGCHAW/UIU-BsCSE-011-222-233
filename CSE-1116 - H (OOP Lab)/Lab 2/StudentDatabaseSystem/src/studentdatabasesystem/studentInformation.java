package studentdatabasesystem;
public class studentInformation {
    
    public class student {
    public String name;
    public int id[];
    public double merit;
    public double cgpa;
    public int subject[];
   
    public student (String name, String id,int merit, int subjects)
    {
        int i = 3;
        this.name = name;
        this.id[i] = id;
        this.merit = merit;
        this.subject[i]= subjects;
    }
   
    public student(){
        name = "";
        id = ["1","2","3"];
        cgpa = 0; 
    }

}
}
