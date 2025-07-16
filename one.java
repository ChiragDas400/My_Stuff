import java.util.*;
public class one
{
public static void main(String args[]){
System.out.println("Enter the number");
Scanner sc= new Scanner(System.in);
int n=sc.nextInt();
System.out.println("Table is");
for( int i=0;i<=10;i++){

System.out.println(n+"x"+i+"= "+(n*i));

}
int fact=1;
for( int i=1;i<=n;i++){
fact=fact*i;

}
System.out.println("fact is :"+fact);
}
}