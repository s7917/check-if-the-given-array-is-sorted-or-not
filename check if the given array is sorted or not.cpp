#include<iostream>
using namespace std;

int main(){
    int array[] = {1 , 2 ,3 ,89 ,5};
 bool sorted =true;
    for(int i=1 ;i<5; i++){
       
        if(array[i]<=array[i-1]){
            sorted=false;
            break;    
        }
    }
    cout<<sorted<<endl;
   


    return 0;
}
