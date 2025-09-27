#include <iostream>       //include input out put library
using namespace std;      //usinng standard namespace
int main()              //main fonction
 {
    int A[10]={2,6,8,7,1}; //array of size 10 but only 5 element used
    int size=5; //logical size of array 
    int pos=2; //delete element at index2(value 8)


    //shift elements left to overwrite delete one
    for(int i=pos;i<size-1;++i){
        A[i]=A[i+1];
    }
    size--; //reduce logical size

    cout<<"After deletion";
    for(int i=0;i<size;i++)
    cout<<A[i]<<" "; 
    cout<<endl;
    return 0;
}