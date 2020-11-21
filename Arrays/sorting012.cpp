//Given an array which consists of only 0, 1 and 2. 
//Sort the array without using any sorting algo

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of array :";
	cin>>n;
	int a[n];
	cout<<"Enter array values:"<<endl;
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	
	//below lines to sort the array

	int l=0,m=0,h=n-1;

    //dividing into three regions such that l-m = 0, m-h = 1, h-n = 2
    
	while(m<=h){
		if(a[m]==0){
			a[l]=(a[l]+a[m])-(a[m]=a[l]);
			l++;m++;
		}
		else if(a[m]==1){
			m++;
		}
		else if(a[m]==2){
			a[m]=(a[m]+a[h])-(a[h]=a[m]);
			h--;
		}
	}
	cout<<"Sorted array is :"<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}