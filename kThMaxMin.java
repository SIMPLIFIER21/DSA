package Question;

import java.util.Scanner;

public class kThMaxMin {
	public static void main(String[] args) {
		int[] arr= {10,30,20,50,40};
		Scanner sc=new Scanner(System.in);

		int min=0;
		int max=0;
		System.out.println("Array elemts: ");
		for(int i=0;i<arr.length;i++) {
			
			System.out.print(" "+arr[i]);
			}
		System.out.println("");
		for(int i=arr.length-1;i>0;i--) {
			for(int j=0;j<i;j++) {
				if(arr[j]>arr[j+1]) {
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		System.out.println();
		System.out.println("enter k element: ");
		int k=sc.nextInt();
		System.out.println(arr[k-1]);
		
		System.out.println(arr[(arr.length)-k]);
		
	}
}
