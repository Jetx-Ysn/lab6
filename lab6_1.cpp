#include<iostream>
using namespace std;

int main(){
    int x=1,a=0,b=0;
    while(x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x%2==0&&x!=0){
            a++;
        }
        else if(x%2!=0&&x!=0){
            b++;
        }
            
        
    }
    cout << "#Even numbers = " << a<<"\n";
    cout << "#Odd numbers = "<< b;
   
 
   
}
