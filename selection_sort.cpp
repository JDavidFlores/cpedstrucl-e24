#include<iostream>
using namespace std;
int main(){
	int A[ ] = {30, 40, 20, 50, 10};
	int n=5, pass=1;
	for(int i=0;i<n-1;i++){
		cout<<"Pass "<<pass<<endl;
		int min = A[i], index = 1;
		for(int j=i+1;j<n;j++){
			if(A[j]<min){
				min = A[j];
				index = j;
			}
		}
		A[index] = A[i];
		A[i] = min;
		cout<<"NUMBER SWAPED: "<<A[index]<<" and "<<min<<endl;
		for(int k=0;k<n;k++){
			cout<<A[k];
			cout<<" ";
		}
		cout<<"\n";
		pass++;
	}
	return 0;
}
