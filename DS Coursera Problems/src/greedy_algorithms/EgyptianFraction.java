/*Egyptian Fraction Representation of 2/3 is 1/2 + 1/6
Egyptian Fraction Representation of 6/14 is 1/3 + 1/11 + 1/231
Egyptian Fraction Representation of 12/13 is 1/2 + 1/3 + 1/12 + 1/156
We can generate Egyptian Fractions using Greedy Algorithm. For a given number of the form ‘nr/dr’ where dr > nr, first find the 
greatest possible unit fraction, then recur for the remaining part. For example, consider 6/14, we first find ceiling of 14/6, i.e., 3. 
So the first unit fraction becomes 1/3, then recur for (6/14 – 1/3) i.e., 4/42.*/


package greedy_algorithms;
import java.io.*;
import java.util.*;

public class EgyptianFraction {
	
	public static void printEgyptianFraction(int num,int den) {
		if(num==0||den==0)
			return;
		if(den%num==0) {
			System.out.print("1/" +den/num); 
            return; 
		}
		if(num%den==0) { 
            System.out.print(num/den); 
            return;
        }
		if(num>den) {
			System.out.print(num/den+" + ");
			printEgyptianFraction(num%den,den);
			return;
		}
		int n=den/num+1;
		System.out.print("1/"+n+" + "); 
	    printEgyptianFraction(num*n-den,den*n);
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int num,den;
		
		num=Integer.parseInt(br.readLine());
		den=Integer.parseInt(br.readLine());
		
		printEgyptianFraction(num,den);

	}

}
