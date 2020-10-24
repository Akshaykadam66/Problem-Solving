// https://practice.geeksforgeeks.org/problems/majority-element/0#

 import java.util.*;
import java.lang.*;
import java.io.*; 

class MajorityElement {
	public static void main (String[] args) {
		Scanner scanobj = new Scanner(System.in);
		int t,n,tt,count,i,k,flag=0;
		t=scanobj.nextInt();
		for(tt=0;tt<t;tt++){
		    HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
		    n=scanobj.nextInt();
		    int a[]=new int[n];
		    for(i=0;i<n;i++){
		        a[i] = scanobj.nextInt();
		        Integer frequency = map.get(a[i]);
		        if(frequency!=null){
		            map.put(a[i],frequency+1);
		        }else{
		            map.put(a[i],1);
		        }
		    }
		    count = n/2;
		    for(Integer kk : map.keySet()){
		        if(map.get(kk)-1==count){
		            System.out.println(kk);
		            flag=1;
		            break;
		        }
		    }
		    if(flag!=1){
		       System.out.println(-1);
		    }
		    flag=0;
		}
	}
}
