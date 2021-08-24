#include<iostream>
using namespace std;

int OptimizedAPowerN(int n,int a){
    //base case
    if(n==0){
        return 1;
    }

    //recursive case
    int subProb=OptimizedAPowerN(n/2,a);
    int subProbsq = subProb*subProb;
    if(n%2==0){
        return subProbsq;
    }
    else return a*subProbsq;
}

int aPowerN(int n, int a){
    //base case
    if(n==0){
        return 1;
    }
    //recursive case
    return a*aPowerN(n-1,a);
}
int main(){
    int a;
    int n;
    cin>>a;
    cin>>n;
    int ans = aPowerN(n, a);
    int ansOptimized = OptimizedAPowerN(n,a);
    cout<<ans<<endl;
    cout<<ansOptimized;
    return 0;
}