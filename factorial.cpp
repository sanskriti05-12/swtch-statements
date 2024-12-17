#include<iostream>
using namespace std;
int main(){
    int n,f;
    cout<<"enter the number";
    cin>>n;
    f=n;
    int i=1;
//     for( int i=1;i<n;i++){
        
//         f=f*i;
        

//     }
//     cout<<f;
// }
// while(i<n){
//     f=f*i;
//     i++; 
// }
// cout<<f;
// }
do{
    f=f*i;
    
    
    i++;
    cout<<f;
   
}
while(i<n);
 
}