// for retreving a digit form a number .......
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int prod = 1;
    while(n!=0){
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int ans = prod - sum;
    return ans;
    return 0;
}