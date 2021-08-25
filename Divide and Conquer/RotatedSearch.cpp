#include<iostream>
#include<vector>
using namespace std;

int rotatedSearch(vector<int> &arr, int key){
    int s=0;
    int e=arr.size()-1;
    
    //logic
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }

        if(arr[s]<=arr[mid]){
            //if mid lying in line1
            if(key>=arr[s] and key<=arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }   
        else {
            //if mid lying in line2
            if(key<arr[e] and key>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}


int main(){
    vector<int> arr{4,5,6,7,0,1,2,3};
    int key;
    cin>>key;
    cout<<rotatedSearch(arr,key)<<endl;

    return 0;
}