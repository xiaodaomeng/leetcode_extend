#include <iostream>
using namespace std;
int fibonacci(int N,int fib[]){
    if(N==0) return 0;
    if(N==1) return 1;
    if(fib[N]!=0) return fib[N];
    fib[N]=fibonacci(N-1,fib)+fibonacci(N-2,fib);	
    return fib[N];
}
int main(){
    int number=3;
    int * fib = new int [number];
    cout<<fibonacci(number,fib)<<endl;
    delete[] fib;
}
