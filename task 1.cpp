// Bubble sort
#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){ //compair
                swap(arr[j],arr[j+1]);//swap operation //cuurent elemnt is greater then next elemnt than swap
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){ //print funtion
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter number at index no.:" << i << " ";
        cin >> arr[i];
    }
    cout<<"hamara bubble sort - sort ho gya hai "<<endl;
    bubbleSort(arr,7);
}