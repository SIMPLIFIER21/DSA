package Question;

public class MaxProductSubarray {

	public static void main(String[] args) {
		int[] arr= {6,-3,-10,0,2};
		int min=1;
		int max=1;
		int res=1;
		for(int i=0;i<arr.length;i++) {
			if(arr[i]>0) {
				max=max*arr[i];
				min=Math.min(arr[i]*min,1);
			}
			if(arr[i]<0) {
				int t=max;
				max=min;
				min=t;
				
				
			}
			if(arr[i]==0) {
				min=1;max=1;
			}
		}
	}

}
