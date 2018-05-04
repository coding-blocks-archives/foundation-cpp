// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    for(int i = 1; i <= num; ++i){
        ans = ans * i;
    }   
    return ans;
}


int main(){
    int n, r;
    cin >> n >> r;

    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);
    int ans = nfact/ (rfact*nrfact);
    cout << ans;
}




// int main() {
//     int nfact = 1;
//     int n, r; cin >> n >> r;

//     // compute n!
//     for (int curNum = 1; curNum <= n; ++curNum) {
//         nfact = nfact * curNum;
//     }

//     // compute r!
//     int rfact = 1;
//     for (int curNum = 1; curNum <= r; ++curNum) {
//         rfact = rfact * curNum;
//     }

//     // compute n - r !
//     int nrfact = 1;
//     for (int curNum = 1; curNum <= (n-r); ++curNum) {
//         nrfact = nrfact * curNum;
//     }

//     int ans = (nfact)/ (rfact * nrfact);
//     cout << ans;
// }