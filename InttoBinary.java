import java.io.*;
import java.util.*;
class InttoBinary
{
public static void main(String[] a)
{ 
System.out.println("Enter the size of the array = ");
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
int[] arr=new int [n]; 
int[] ar=new int [n]; 
System.out.println("Enter the elements : ");
 for(int i=0;i<arr.length;i++)
{
 arr[i]=sc.nextInt();
}
for(int i=0;i<arr.length;i++)
{
ar[i]=Integer.toBinaryString(Integer.parseInt(integerString));
} 
for(int i=0;i<ar.length;i++)
{
for(int j=i+1;j<ar.length-1;j++)
{
if(Integer.bitCount(ar[i])>Integer.bitCount(ar[j])) 
{
temp =  arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
else if(Integer.bitCount(ar[i])==Integer.bitCount(ar[j]))
{
if(arr[j] >arr[i])
{
temp =  arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}}}
System.out.println("Sorted List");
for(int i=0;i<arr.length;i++)
{
System.out.println(arr[i]);
}
   }
}
