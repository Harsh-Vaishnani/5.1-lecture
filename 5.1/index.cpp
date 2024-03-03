#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number ";
    cin>>num;
    int sum=0;
    for(int i=1; i<=num; i++){
        sum=sum+num;
    }
    cout<<sum;
    return 0; 
    
}


#include <iostream>
using namespace std;
int main(){
    int i,n,fact;
    fact=1;
    cout<<"enter number ";
    cin>>n;
    i=n;
    while(i>=1){
        fact=fact*i;
        i--;
    }
    cout<<"factorial is "<<fact<<endl;
    return 0;
}