#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t, n, i;
	    cin >> n;
	    int arr[n];
	    for(i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    sort(arr, arr+n);
	    int flag=0;
	    int a;
	    for(i=0; i<n; i++){
	        if(arr[i]!=arr[0]){
	            a=arr[i];
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<"The smallest element is  " << arr[0] <<" and\n the second smallest element is " << a << endl;
	    }
	
	return 0;
}