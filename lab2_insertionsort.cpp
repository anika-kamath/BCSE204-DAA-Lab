#include<iostream>
#include<ctime>

using namespace std;

void insertionSort(int a[],int n){
	int key,j;
    for(int i=1;i<n;i++){
    	key=a[i];
    	j=i-1;
    	while(a[j]>key && j>=0){
    		a[j+1]=a[j];
    		j--;
    	}
        a[j+1]=key;
    }
    cout<<"Array sorted using Insertion Sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
	int n;
	cout<<"Enter number of elements in array: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
        cout<<endl<<"Enter element "<<i+1<<": ";
		cin>>a[i];
    
       //int random=rand();
		
	}
	insertionSort(a,n);

    //time
    clock_t tstart=clock();
    double time1=(double)clock()-(tstart)/CLOCKS_PER_SEC;
    cout<<"Time taken to execute: "<<time1<<endl;
	
	return 0;
}
