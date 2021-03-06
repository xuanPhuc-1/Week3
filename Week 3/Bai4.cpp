#include<iostream>
using namespace std;
int C(int k, int a) {
    if (k == 0 || k == a) 
	return 1;
    if (k == 1) 
	return a;
    return C(k - 1, a - 1) + C(k, a - 1);
}
int main(){
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        
        for (int j = 0; j <= i; j++) {
            cout << C(j, i) ;
        }
        cout << endl;
    }
    return 0;
}