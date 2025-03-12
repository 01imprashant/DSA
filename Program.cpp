#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string binary;
    cin >> binary;
    int n = binary.length();
    vector<int> worth(n);

    // Input the worth values
    for (int i = 0; i < n; i++) {
        cin >> worth[i];
    }

    // Total worth of the string
    int totalWorth = 0;
    for (int i = 0; i < n; i++) {
        totalWorth += worth[i];
    }

    // Compute the maximum worth of the largest alternating string
    int maxWorth = worth[0]; // Start with the worth of the first character
    char lastChar = binary[0]; // Keep track of the last character added to the alternating string

    for (int i = 1; i < n; i++) {
        if (binary[i] != lastChar) {
            // If the character alternates, include it
            maxWorth += worth[i];
            lastChar = binary[i];
        } 
        else if(binary[i]==lastChar){
             if(worth[i]>worth[lastChar]){
                    maxWorth+=worth[i];
                    lastChar=binary[i];
                }
                else{
                    lastChar=binary[i];
                }
        }
    }

    // The total worth removed
    int worthRemoved = totalWorth - maxWorth;

    // Output the result
    cout << worthRemoved << endl;

    return 0;
}





// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   string binary;
//   cin>>binary;
//   int n=binary.length();
//   vector<int> worth(n);
//   for(int i=0;i<n;i++){
//       cin>>worth[i];
//   }
//   int totalWorth=0;
//   for(int i=0;i<n;i++){
//     totalWorth=totalWorth+worth[i];
//   }
//   cout<<totalWorth<<endl;
//   int maxWorth=0;
//   char lastChar=binary[0];
//   for(int i=0;i<n;i++){
//     if(lastChar==binary[i]){
//      if(worth[i]<worth[i-1]){
//        maxWorth=maxWorth+worth[i];
//      }
//       lastChar=binary[i];
//     }
//     else{
//       maxWorth=maxWorth+worth[i];
//       lastChar=binary[i];
//     }
//   }
//   cout<<maxWorth<<endl;
//   cout<<totalWorth-maxWorth<<endl;
//   return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     string binary;
//     cin >> binary;
//     int n = binary.length();
//     vector<int> worth(n);

//     // Input the worth values
//     for (int i = 0; i < n; i++) {
//         cin >> worth[i];
//     }

//     // Compute total worth
//     int totalWorth = 0;
//     for (int i = 0; i < n; i++) {
//         totalWorth += worth[i];
//     }
//     cout << "Total Worth: " << totalWorth << endl;

//     // Compute maxWorth for the largest alternating string
//     int maxWorth = worth[0]; // Start with the first character
//     char lastChar = binary[0];

//     for (int i = 1; i < n; i++) {
//         if (binary[i] != lastChar) { // Alternate character
//             maxWorth += worth[i];
//             lastChar = binary[i];
//         }
//     }

//     // Output the results
//     cout << "Max Worth of Alternating String: " << maxWorth << endl;
//     cout << "Difference: " << totalWorth - maxWorth << endl;

//     return 0;
// }