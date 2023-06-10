#include <iostream>
using namespace std;

int max(int x, int y) {
   return (x > y) ? x : y;
}

int knapSack(int W, int w[], int v[], int n) {
   int i, wt;
   int K[n + 1][W + 1];

   for (i = 0; i <= n; i++) {
       for (wt = 0; wt <= W; wt++) {
           if (i == 0 || wt == 0)
               K[i][wt] = 0;
           else if (w[i - 1] <= wt)
               K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
           else
               K[i][wt] = K[i - 1][wt];
       }
   }

   // Printing the selected items
   int res = K[n][W];
   int remainingCapacity = W;
   int selectedItems[n];
   for (i = n; i > 0 && res > 0; i--) {
       if (res == K[i - 1][remainingCapacity])
           selectedItems[i - 1] = 0;
       else {
           selectedItems[i - 1] = 1;
           res -= v[i - 1];
           remainingCapacity -= w[i - 1];
       }
   }

   cout << "Item selection: ";
   for (i = 0; i < n; i++) {
       cout << selectedItems[i];
   }
   cout << endl;

   return K[n][W];
}

int main() {
   cout << "Enter the capacity of the knapsack: ";
   int W;
   cin >> W;

   cout << "Enter the total number of items: ";
   int n;
   cin >> n;

   int v[n], w[n];
   cout << "Enter the weights of the items: ";
   for (int i = 0; i < n; i++) {
       cin >> w[i];
   }

   cout << "Enter the values of the items: ";
   for (int i = 0; i < n; i++) {
       cin >> v[i];
   }

   cout << "Maximum value: " << knapSack(W, w, v, n) << endl;

   return 0;
}
