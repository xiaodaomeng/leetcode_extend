/*
median for unsorted array
selection alg time O(n) 
use quick sort partition step, not sort it
*/
int select(A[1...n],k){//k is median index odd:A[k], even:(A[k]+A[k-1])/2
   for(i=0;i<k;i++){
	int minIndex=i;
	int minValue=A[i];
	for(int j=i+1;j<n;j++){
	    if(A[j]<minValue){
		minIndex=j;
		minValue=A[j];
	    }
	}
	swap(A[i],A[minIndex]);
   }
   return A[k];
}
