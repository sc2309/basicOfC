#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout << "Hello world!" << endl;
    cout << "Please enter the size of the array." << endl;
    cin >> n;
    
    int arr[n];
    cout << "Please enter the array." << endl;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    
    cin >> key;
    
    cout << linearSearch(arr,n,key) << endl;
    
	return 0;
}
