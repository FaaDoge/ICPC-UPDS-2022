#include <iostream>
#include <math.h>
using namespace std;
const int Lim = 1e6;
bool marked[Lim] = {false};
void criba() {
	marked[0] = 1;
	marked[1] = 1;
	for(int i = 2 ; i <= sqrt(Lim) ; i ++ ) {
		if(marked[i] == false ) {
			for(int j = i + i ; j < Lim ; j += i ){
				marked[j] = true;
			}
		}
	}
}
int main() {
    int n; cin >> n;
    for(int l=0;l<n;l++){
        int con=0;
	int i,f; cin >> i;f; cin >> f;
	criba();
	for(i;i<=f;i++) {
		if(marked[i] == false && i!=1) {
			con++;
		}
	}
       cout<<con;
    }
	return 0;
}
