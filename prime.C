#include<vector>
#include<iostream>
using namespace std;
int main(){
    std::vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<100;i++){
	bool isprime=true;
        for(int j=0;j<primes.size()&&primes[j]*primes[j]<=i;j++){
	    if(i%primes[j]==0){
		isprime=false;
		break;
	    }
	}
	if(isprime){
	   primes.push_back(i);
           cout<<i<<" ";
        }
    }
    return 0;
}
