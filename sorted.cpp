#include<iostrem>
using namespace std;

int main(){
    int n ;
     cout<<"enter the size of array: ";
     cin>> n;
     int array[n];
     for(int i =0 ; i<n ; i++){
        cin>> array[i];
      }
 
 bool sorted =true;
    for(int i=1 ;i<n; i++){
       
        if(array[i]<=array[i-1]){
            sorted=false;
            break;    
        }
    }
    cout<<sorted<<endl;
   


    return 0;
}
