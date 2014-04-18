// constructing priority queues
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <vector>         // std::vector
#include <functional>     // std::greater
using namespace std;

int main ()
{
  int myints[]= {10,60,50,20};
  //priority_queue greater(return min), myint,myint+k,compare q.top() and a[k]...a[n], if larger than top, pop top, push into q
  //time O(k+(n-k)logk)
  std::priority_queue<int> largest (myints,myints+4);
  std::priority_queue<int, std::vector<int>, std::greater<int> >
                            smallest (myints,myints+4);

  cout<<largest.top()<<endl;
  cout<<smallest.top()<<endl;
  //build minheap 
  int minHeap[k];
  for(int i=0;i<k;i++){
      minHeap[i]=a[i];
  }
  buildMinHeap(minHeap,k);
  for(int i=k;i<N;i++){
      if(a[i]>minHeap[0]){
	 minHeap[0]=a[i];
         minHeapify(minHeap,k,0);
      }
  }
  return 0;
  //selection alg, partial sorted, partition time O(n) 
}
void buildMinHeap(int a[],int size){
     for(int i=size/2;i>=0;i--)
	minHeapify(a,size,i);
}
void minHeapify(int a[],int size,int i){
     int l=2*i;
     int r=2*i+1;
     int smallest=i;
     if(l<size && a[l]<a[smallest])
 	smallest=l;
     if(r<size && a[r]<a[smallest])
 	smallest=r;
     if(smllest!=i){
	swap(a[i],a[smallest]);
        minHeapify(a,size,smallest);
     }
}
