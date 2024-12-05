
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    else {
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return false;
            }
        }

}
    return true;
}



int main(){
    int n;
    cin>>n;
    bool result = isPrime(n);

    if(result ){
        cout<<"The number "<<n<<" is a prime number. "<<endl;
    }
    else {
        cout<<"The number "<<n<<" is not a prime number. "<<endl;
    }

    return 0;
}
