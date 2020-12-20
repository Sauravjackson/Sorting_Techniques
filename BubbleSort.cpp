//Bubble Sort
//Max order time: O(n^2)
//Min order time: O(n)
//Features: Adaptive,Stable
#include <iostream>
using namespace std;


void input(int Array[],int size){
    //to take Input from user
    for(int i=0;i<size;i++){
        cout<<"\nEnter the value at index "<<i<<":";
        cin>>Array[i];
    }

}
void display(int Array[],int size){
    //to display the array
    for(int i=0;i<size;i++){
        cout<<Array[i]<<"\n";
    }


}
void bubbleSort(int Array[],int size){

    int temp;//to swap
    int flag=0;//to make the sorting adaptive
    cout<<"\n**SORTING YOUR DATA...**\n";
    for(int i=0;i<size-1;i++){
        //loop for "passes"
        //number of Passes = n-1 if, n is the total number of element
        for(int j=0;j<size-1-i;j++){
            //for comparing and swapping ,if needed
            if(Array[j]>Array[j+1]){
                temp=Array[j+1];//Swapping
                Array[j+1]=Array[j];
                Array[j]=temp;
                flag=1;
                //number of comparisons=1+2+3....+ n-1=  n(n-1)/2
                // MAX number of swaps possible =1+2+3+4+5......+n-1 =n(n-1)/2
            }
        }
        if (flag==0){
            //to make Bubble sort Adaptive
            cout<<"\nData is already sorted\n";
            cout<<"\nHere is your Sorted List:\n";
            display(Array,size);
            return;
        }
    }
    cout<<"\nData Sorted :)\n";
    cout<<"\nHere is your Sorted List:\n";
    display(Array,size);
}




int main() {
  
    int size = 0;
    cout<<"\nEnter the size of Array:";
    cin>>size;
    if(size<=0)//Array size can'nt be neagtive or zero 
        cout<<"!!Give the array an Appropriate size!!";
    else {
        int Array[size];
        input(Array, size);
        display(Array, size);
        bubbleSort(Array, size);
    }
    return 0;
}
