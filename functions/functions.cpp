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

#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++){
         ans = ans * i;
       
    } 
    return ans;
}
int nCr(int n, int r){
    int num = fact(n);
    int denom = fact(r) * fact(n - r);
    return num / denom;
}
int main(){
    int n, r;
    cin >> n>> r;
    int answer = nCr(n, r);
    cout<<answer;
    return 0;
}