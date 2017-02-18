#include<iostream>
using namespace std;
int main(){
	int A[ ] = {35,10,55,20,5};
	int n = 5, pass = 1;
	for(int i=n;i>1;i--){
		cout<<"Pass "<<pass<<endl;
		for(int j=0;j<i-1;j++){
			if(A[j]>A[j+1]){
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
				cout<<"NUMBER SWAPED: "<<A[j]<<" and "<<swap<<endl;
			}
		}
		for(int k=0;k<n;k++){
			cout<<A[k];
			cout<<" ";
		}
		cout<<"\n";
		pass++;
	}
	return 0;
}
