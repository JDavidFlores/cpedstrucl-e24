#include<iostream>
using namespace std;
void shell_sort(int *a, int n){
	int h, i, j, k;
	int pass=1;
	for(h=n;h/=2;){
		for(i=h;i<n;i++){
			cout<<"Pass "<<pass<<":"<<endl;
			k=a[i];
			for(j=i;j>=h && k<a[j-h]; j-=h){
			cout<<"NUMBER SWAPED: "<<a[j];
				a[j] = a[j-h];
			cout<<" and "<<a[j]<<endl;
			}
			a[j] = k;     
			for(int l=0;l<n;l++){
			cout<<a[l];
			cout<<" ";
			}
			cout<<"\n";
			cout<<"\n";
			pass++;
		}	
	}
}
int main(int ac, char **av){
	int A[ ] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
	int n= sizeof A / sizeof A[0];
	shell_sort(A,n);
	return 0;
}
