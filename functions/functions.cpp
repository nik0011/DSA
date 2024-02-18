// #include<iostream>
// using namespace std;
// int power(int n1 , int n2){
//     int ans = 1;
//     for (int i = 1; i <= n2; i++){
//         ans = ans * n1;
//     }
//     return ans;
// }
// int main(){
//     int a, b;
//     cin >> a >> b;
//     int answewr = power(a, b);
//     cout << answewr;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int ans = 1;
//     for (int i = 1; i <= n; i++){
//          ans = ans * i;
       
//     } 
//     return ans;
// }
// int nCr(int n, int r){
//     int num = fact(n);
//     int denom = fact(r) * fact(n - r);
//     return num / denom;
// }
// int main(){
//     int n, r;
//     cin >> n>> r;
//     int answer = nCr(n, r);
//     cout<<answer;
//     return 0;
// }

// for calculating total no of 1 bits in 2 no 
// #include<iostream>
// using namespace std;
// int setbits(int n){
//     int count = 0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n = n >> 1;
//     }
//     return count;
// }

// int main(){
//     int a, b;
//     cin >> a >> b;
//     int a1 = setbits(a);
//     int b1 = setbits(b);
//     int ans = a1 + b1;
//     cout << ans;
//     return 0;
// }

#include<iostream>
using namespace std;
int update(int a){
    a += 5;
    return a;
}
int main(){
    int a = 15;
     int ans=update(a);
    cout << ans;
    return 0;
}