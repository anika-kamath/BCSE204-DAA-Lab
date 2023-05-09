#include<iostream>
#include<ctime>

using namespace std;

void bubbleSort(int a[],int n){
    int temp;
    for(int i=0;i<n;++i){
        int count=0;

    	for(int j=0;j<n-i-1;++j){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                count++;
            }
        }
        cout<<"Number of swaps: "<<count<<endl;

        if(count==0){
            break;
        }
        
    }
    
    cout<<"Array sorted using Bubble Sort: "<<endl;
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
        /*
        cout<<endl<<"Enter element "<<i+1<<": ";
		cin>>a[i];
        */
        
        int random=rand();
		
	}
	bubbleSort(a,n);

    //time
    clock_t tstart=clock();
    double time1=(double)clock()-(tstart)/CLOCKS_PER_SEC;
    cout<<"Time taken to execute: "<<time1<<endl;
	
	return 0;
}
