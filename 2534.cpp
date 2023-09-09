#include <iostream>
#include <utility>


using namespace std;


void bubblesort(int vet[], int n) {

     int i, j;

     for (i = 0; i <= n - 1; i++) {

          for (j = 1; j <= n - i; j++) {

               if (vet[j] < vet[j + 1])
                    swap (vet[j], vet[j + 1]);
          }
     }


}

int main() {

     int n, q;

     while (cin >> n >> q) {

          int nota[n];

          for (int i = 1; i <= n; i++)

               cin >> nota[i];


          bubblesort(nota, n);


          int pos;

          for (int j = 0; j < q; j++) {

               cin >> pos;
               cout << nota[pos] << "\n";
          }


     }

     return 0;
}