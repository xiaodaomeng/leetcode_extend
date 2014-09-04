#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    cout<<"Please input an integer between 2 and 10000000"<<endl;
    unsigned long number;
    cin>>number;
    //check it is a valid digit and greater than 1
    while(cin.eof() || number<=1){
       cout<<"Invaild input, please input an integer between 2 and 10000000"<<endl;	
       exit(0);
    }
    vector<unsigned long> primes;
    primes.push_back(2);//push first prime number
    unsigned long long sum=2;   
    for(int i=3;i<number;i++){
  	bool isprime=true;
        for(int j=0;j<primes.size()&&primes[j]*primes[j]<=i;j++){
	    if(i%primes[j]==0){
	       isprime=false;
	       break;
	    }
	}
	if(isprime){
	   primes.push_back(i);
           //cout<<i<<" ";
           sum += i;
        }
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
}
