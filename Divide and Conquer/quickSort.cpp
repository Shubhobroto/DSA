#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int s, int e){
    int p = arr[e];
    int i = s-1;

    for(int j=s;j<e;j++){
        if(arr[j]<p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;


}

void quickSort(vector<int> &arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //recursive case
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);


}

int main(){
    vector<int> arr{4,7,8,9,2,0,1,5,6,3,4};
    int n = arr.size();

    quickSort(arr,0,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}