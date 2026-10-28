#include <iostream>
using namespace std;
int main() {
int arr[]={10,20,30,40,50};
int key;
int found=-1;
cout<<"search number"
cin>key;
for(int i=0; i<5; i++){
if(arr[i]==key)
found=i;
break;
}
    }