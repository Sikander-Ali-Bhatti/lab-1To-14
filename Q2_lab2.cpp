#include <iostream>
using namespace std;
int main(){
	int arry1[5]={1,2,3,4,5};
	int arry2[6];
	int new_item=0;
	int index=0;
	
	for(int i=0;i<index;i++){
		arry2[i]=arry1[i];
	}
	arry2[index]=new_item;
	
	for (int i=index;i<5;i++){
		arry2[i+1]=arry1[i];
	}
	for(int i=0;i<6;i++){
		cout<<arry2[i]<<" ";
	}
	return 0;
}