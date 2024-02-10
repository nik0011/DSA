//decimal to binary....
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){

//     int n;
//     cin >> n;
//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int bit = n & 1;
//         ans = (bit * pow(10, i) + ans);
//         n = n >> 1;
//         i++;
//     }
//     cout<<ans;
//     return 0;
// }

//negative decimal no to binary
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i;
//     int ans;
//         int ones = ~n;
//         int one = ones + 1;
//         int tows = ~one;
//         int two = tows + 1;
//         while(two!=0){
//             int bit = two & 1;
//             ans = (bit * pow(10, i)) + ans;
//             two = two >> 1;
//             i++;
//         }
//         cout << ans;

//         cout << ans;
//         return 0;
// }

//Binary to decimal.....
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=0;
    int ans=0;
    while(n!=0){
        int digit = n % 10;
        if(digit==1){
            ans = ans + pow(2, i);
        }
        i++;
        n = n/10;
    }
    cout << ans;
    return 0;
}