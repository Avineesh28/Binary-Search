import java.util.*;
public class Binary_Search
{
    int size;
    int a[];
    Binary_Search(int n)
    {
        size=n;
        a=new int[n];
    }

    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the elements");
        for(int i=0;i<size;i++)
            a[i]=sc.nextInt();
        Arrays.sort(a);
    }

    void search(int n)
    {
        int flag=0;
        int e=size-1;
        int b=0;
        int m=0;
        while(b<=e)
        {
            m=(b+e)/2;
            if(a[m]==n)
            {
                System.out.println("Found at " +(m+1));
                flag++;
                break;
            }
            else if(a[m]>n)
                e=m-1;
            else
                b=m+1;
        }
        if(flag==0)
            System.out.println("Not Found");
    }

    void display()
    {
        System.out.println("\f");
        System.out.println(Arrays.toString(a));
    }

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array");
        Binary_Search obj=new Binary_Search(sc.nextInt());
        obj.input();
        System.out.println("Enter Element");
        int c=sc.nextInt();
        obj.display();
        obj.search(c);
    }
}
