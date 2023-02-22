#include<iostream>
using namespace std;
int Binary_Search(int arr[],int s,int key)
{
    int start=0;
    int end=s;
    while(start<=end){
     int mid=(start+end)/2;
     if(arr[mid]==key){
      return mid;
     }
     else if(arr[mid]>end){
        end = mid-1;
     }
     else {
        start =mid+1;
     }
    }
}
int main()
{
    int s,key;
    cout << "Enter the size of array :";
    cin >> s;
    int arr[s];
     for(int i=0;i<s;i++)
   {
    cin >> arr[i];
   }
    cout << "Enter the Value_key to check the index ";
    cin  >> key;
    cout << Binary_Search(arr,s,key);
}