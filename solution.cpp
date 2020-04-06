#include<iostream>
using namespace std;

void arrayOfMultiples(int num, int length){
    
    for(int i=0;i<length;i++){
        
        cout << num*(i+1) << " ";
        
        }

}
int main(){
    int num, length;
    cout << "Enter number and length ";
    cin >> num;
    cin >> length;
    arrayOfMultiples(num, length);
    
    
    
    
    
    
return 0;}
