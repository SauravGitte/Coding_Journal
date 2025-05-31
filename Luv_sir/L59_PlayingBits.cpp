#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    // lets consider 10 bit binary numbers
    // right shift 
    // & operation with 1
    for(int i= 10 ; i>=0 ; --i){
        cout <<( (num >> i) & 1) ;
    }
    cout<< endl;
}

int main(){
    cout<<"Checking set bit"<<endl;
    printBinary(9); // 00000001001
    int a = 9;
    int i = 2; // ith bit 
    printBinary(1<< i);
    //checking if a bit is set
    if((a & (1 << i))  != 0){
        cout<<i<<"th Bit is Set"<<endl;
    }
    else{
        cout<< i <<"th Bit is Unset"<<endl<<endl;
    }

    //making a bit set
    // Take or | with 1
    cout<<"Setting a bit"<<endl;
    printBinary( a | 1<< i );

    // reversing bits
    cout<<"Reversal of bits"<<endl;
    printBinary(a);
    printBinary(~a);
    cout<<endl;

    //Unset a bit
    //Take and & with 0
    cout<<"Unsetting a bit"<<endl;
    printBinary( a &(~(1 << 3)));
    cout<<"3rd bit is removed"<<endl<<endl;

    // Toggle a bit
    // take XOR ^ with 1 
    cout <<"Toggle"<<endl;
    printBinary( a ^ (1<<2));
    cout<<endl;

    //counting all bits
    //say 31 bit number
    cout<<"count:"<<endl;
    int ct = 0;
    for(int i=31 ;i>=0 ;i--){
        if( (a & (1 << i))!=0){
            ct++;
        }
    }
    cout << ct<< endl;
    
    //built in function
    cout<<__builtin_popcount(a)<<endl;
    
    // for long numbers
    cout<<__builtin_popcountll(1LL << 35)<<endl;

}