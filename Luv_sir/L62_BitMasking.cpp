#include<bits/stdc++.h>
using namespace std;

/*
Consider this problem: There are N≤5000 workers. 
Each worker is available during some days of this month (which has 30 days). 
For each worker, you are given a set of numbers, each from interval [1,30] , representing his/her availability.
You need to assign an important project to two workers
but they will be able to work on the project only when they are both available. 
Find two workers that are best for the job — maximize the number of days when both these workers are available. 
*/

/*
sample testcase:
5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7
*/

void printBinary(int num){
    // made changes to print binary
    // prints 30 bits number
    // left the day 0 
    for(int i= 30 ; i>=1 ; --i){
        cout <<( (num >> i) & 1) ;
    }
    cout<< endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> masks(n,0);
    // n represent number of workers
    for(int i=0 ; i<n ; i++){
        int num_days;
        cin >> num_days;
        int mask = 0;
        for(int j=0 ; j < num_days; j++ ){
            int day;
            cin >> day;
            mask = (mask | (1<< day));
        }
        masks[i] = mask;
    }
    // printing all the masks
    for( int i =0 ; i<n ; i++){
        cout<< masks[i] <<"\n";
        printBinary(masks[i]);
    }
    // Printing intersection between every 2 people
    int max_days =0 ;
    int person1 = -1;
    int person2 = -1;
    for( int i =0; i< n-1 ;i++){
        for(int j =i+1 ; j<n ;j++){
            // find common days
            int intersection = (masks[i] & masks[j]);
            // count set bits
            int common_days = __builtin_popcount( intersection );
            if(common_days > max_days){
                person1 = i;
                person2 = j;
                max_days = max(max_days ,common_days);
            }
            //printing for each pair
            cout << i << " " << j << " " << common_days << endl;
        }
    }
    cout<< "Finally best workers are: " << "person-"<< person1 << " and person-" << person2 <<" With together days: "<< max_days << endl;
    // Finally O(N^2) time complexity
    // saves a lot of space
}