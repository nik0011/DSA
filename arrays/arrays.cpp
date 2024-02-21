// for intitializing array with 1 default value
// #include <iostream>
// using namespace std;
// int main() {
//     int size = 5;
//     int defaultValue = 5;
//     int myArray[size];
//     for (int i = 0; i < size; i++) {
//         myArray[i] = defaultValue;
//         cout << myArray[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int printarray(int arr[],int size){
//     for (int i = 0; i < size;i++){
//         cout << arr[i] << " ";
//     }
   
//     return 0;
// }
// int main() {
//     int firstarr[10] = {1, 2};
//     int size = 10;
//     int arraysize = sizeof(firstarr) / sizeof(int);
//     cout << arraysize;
//     printarray(firstarr, size);
    
//     return 0;
// }


// Max-Min in Array
// #include <iostream>
// using namespace std;
// int getmax(int arr[], int n){
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++){
//         // if(arr[i]>max){
//         //     max = arr[i];
//         // }
//         maxi = max(maxi, arr[i]);
//     }
//     return maxi;
// }
// int getmin(int arr[], int n){
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int main() {
//     int arr[100];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     cout << "max value = " << getmax(arr, n)<<endl;
//     cout << "min value = " << getmin(arr, n)<<endl;
//     return 0;
// }

// for calc sum of all element...
// #include <iostream>
// using namespace std;
// int totalsum(int arr[], int n){
//     int sum=0;
//     for (int i = 0; i < n; i++){
//         sum = sum + arr[i];
//     }
//     return sum;
// }
// int main() {
//     int arr[100];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     cout << totalsum(arr, n);

//     return 0;
// }

//  linear searching....
// #include <iostream>
// using namespace std;
// bool search(int arr[], int size , int key){
//     for (int i = 0; i < size; i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main() {
//     int arr[10] = {1, 2, 4, 6, -7, 89, 0, 22, 33, 11};
//     cout << "Enter the key to be found"<<endl;
//     int key;
//     cin >> key;
//     bool found = search(arr, 10, key);
//     if(found){
//         cout << "key is present" << endl;
//     }
//     else{
//         cout << "key is not found";
//     }
//     return 0;
// }