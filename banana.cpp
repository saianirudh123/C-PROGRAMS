#include<iostream>

using namespace std;

int main(){
	int a[100];
	int x,y,even,odd,flag;
	int test;
	cin >> test;
	int n,m;	
	for(int i = 0 ; i < test; i++){
		even = odd = 0;
		flag = 0;
		cin >> n > m;
		for(int j = 0 ; j < m ; j++){
			cin >> x >> y;
			a[x]++;
			a[y]++;		
		}
		for(int j = 0 ; j < n ; j++){
			if(a[j] == 0){
				flag++;			
			}else if(a[j]%2 != 0){
				flag++;			
			}			
		}
		if(flag == 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}		
	}
	return 0 ;
}
