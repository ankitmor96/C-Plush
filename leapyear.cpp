#include <iostream>
using namespace std;

int main() {
    int start,end;
    int arr[100];
    int count=0;


    cout<<"enter the start year:";
    cin>>start;
    cout<<"enter end year:";
    cin>>end;

    for(int i=start;i<=end;i++){
        if(i%4==0 && i%100!=0 || i%400==0){
            arr[count]=i;
            count++;
        }
    }
    cout<<"the leap year is:";
    for(int i=0;i<count;i++){
        cout << arr [i];
        if (i%2==0)
        cout << " ";
        
    }

    return 0;
}
