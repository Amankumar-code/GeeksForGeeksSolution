import java.util.*;
import java.lang.*;
import java.io.*;


class GFG {
    
	public static void main (String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int T = Integer.parseInt(br.readLine());
		while(T-->0){
		    int N = Integer.parseInt(br.readLine());
		    int arr[] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		    int mx = Integer.MIN_VALUE;
		    
		    TreeSet<Integer> ts = new TreeSet<>();
		    for(int i=N-1;i>=0;i--){
		          ts.add(arr[i]);
		          mx = Math.max(ts.headSet(arr[i]).size(),mx);
		    }
		    
		    bw.write(mx+"\n");
		    bw.flush();
		}
	}
}
