//Write a program to cyclically rotate an array by one.

#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter size of Array : ";
	cin>>n;
	int i;
	int* a=new int[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int d,steps;
	cout<<"To Rotate left press 0,\nTo Rotate right press 1\n";
	cin>>d;
    cout<<"Number of positions to rotate : ";
    cin>>steps;
	if(d==0){
		int* temp=new int[n];
		i=0;
        int t=n-steps;
        while(i<n){
            temp[i++]=a[t];
            t=(t+1)%n;
        }
		a=temp;
	}
	else if(d==1){
		int* temp=new int[n];
		i=0;
        int t=i+steps;
        while(i<n){
            temp[i++]=a[t];
            t=(t+1)%n;
        }
		a=temp;
	}
	
	//rotated array display
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}