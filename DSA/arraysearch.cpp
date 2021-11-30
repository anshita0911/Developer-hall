#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
	for(int i=0;i<n;i++){
		if(key==arr[i]){
			return(i);
		}
	}
	return(-1);
}

int main(){
	 int n;
	 cout<<"enter n : ";
	 cin>>n;
	 
	 int arr[n];
	 cout<<"enter elements of array : ";
	 for(int i=0;i<=n;i++){
	 	cin>>arr[i];
	 }
	 int key;
	 cout<<"enter the key : ";
	 cin>>key;
	 
	 cout<<search(arr, n, key)<<endl;
		 
		 return(0);
}
