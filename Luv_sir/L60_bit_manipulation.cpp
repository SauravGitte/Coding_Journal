#include<bits/stdc++.h>
using namespace std;

void printBinary( int num){
    for(int i=10 ; i >=0 ; i--){
        cout<< ((num >> i) & 1);
    }
    cout<<endl;
}

int main(){ 
    // even-odd check
    for(int i = 0 ; i <4 ; i++){
        printBinary(i);
        if( i & 1){
            cout << "odd\n";
        }
        else cout<<"even\n";
    }
    
    // multiply/divide by 2
    int n =5 ;
    cout<<"Number is "<<n<<endl;
    cout<<"divide-right shift:"<< (n>>1)<< endl ; //divide
    cout<<"multiply-left shift:"<< (n<<1)<< endl ; //multiply

    // clear LSB till ith bit
    // take & with 0 0 0 0 1 1 1 1 1 type number
    int i = 4;
    cout<<"Clear LSB till "<<i<<"th bit"<<endl;
    printBinary(59);
    int b = 59 & (~((1<<(i+1))-1));
    printBinary(b);

    // clear MSB till ith bit
    i =3;
    cout<<"Clear MSB till "<<i<<"th bit"<<endl;
    printBinary(59);
    int c = 59 & ((1<<(i+1))-1);
    printBinary(c);

    //check if a number is power of 2
    int k = 16;
    cout<< k << " is: "<<endl;
    if ((k & (k-1))){
        cout<<"Not power of 2"<<endl;
    }
    else{
        cout<<"power of 2"<<endl;
    }


}