//method 1: recursive
/*
  inline int Factorial(int x){
    return x==0?1:Factorial(x-1)*x;
  }  
*/
//method 2: iterative for loop
//method 3: gamma function
//method 4: mock multiplication
#include <iostream>
using namespace std;
const int maxarray=500;
void factorial(int arr[],int n){
     if(n==0) return;
     int carry=0;
     for(int i=maxarray-1;i>=0;i--){
	 arr[i] = (arr[i]*n)+carry;
         carry = arr[i]/10;
         arr[i] %= 10;
     }
     factorial(arr,n-1);
}
int main(){
    int *arr = new int[maxarray];
    arr[maxarray-1]=1;
    factorial(arr,15);
    int flag=0;
    for(int i=0;i<maxarray;i++){
       if(arr[i]!=0 && flag==0) flag=1;
       if(flag==1) cout<<arr[i];
    }
    cout<<endl;
    return 0;
}
