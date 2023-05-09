#include<iostream>
#include<ctime>
#include<random>

using namespace std;

int main(){
    int n;
    cout<<"enter number of random numbers: ";
    cin>>n;
    cout<<"\nGenerated random numbers: \n";
    
    for(int i=0;i<n;i++){
        int random=rand();
        cout<<i<<" ";}
    cout<<"\n";
    clock_t tstart=clock();
    double time1=(double)clock()-(tstart)/CLOCKS_PER_SEC;
    cout<<"Time taken to execute:"<<time1<<endl;
    return 0;
    }