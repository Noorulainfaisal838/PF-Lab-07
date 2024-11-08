#include<iostream>
using namespace std;
int main() {
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    int*array=new int[size];
    for(int i=0;i<5;i++){
        cout<<"enter the value store in array:";
cin>>array[i];
    }
    cout<<"values in array:"<<endl;
    for(int i=0;i<5;i++)
    cout<<array[i]<<endl;
    return 0;
}
    
