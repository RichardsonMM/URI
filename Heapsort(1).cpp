/* Algoritmo de ordenação HeapSort
    by Richardson Moraes
*/

#include <iostream>
 
using namespace std;
 
// Função que transforma o array em heap
void MaxHeapify(int a[], int i, int n){
	int j, temp;
	temp = a[i];
	j = 2*i;
 
 	while (j <= n){
		if (j < n && a[j+1] > a[j])
		j = j+1;
		// Quebra o laço se o valor do pai já é maior que os dos seus filhos
		if (temp > a[j])
			break;
		// Troca o valor com o  nó pai se temp < a[j].
		else if (temp <= a[j]){
			a[j/2] = a[j];
			j = 2*j;
		}
	}
	a[j/2] = temp;
	return;
}
void HeapSort(int a[], int n)
{
	int i, temp;
	for (i = n; i >= 2; i--)
	{
		// Armazena o maior valor no fim do array.
		temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		// Constrói o heap de máximo com os elementos restantes.
		MaxHeapify(a, 1, i - 1);
	}
}
void Build_MaxHeap(int a[], int n)
{
	int i;
	for(i = n/2; i >= 1; i--)
		MaxHeapify(a, i, n);
}
int main()
{
	int n, i;
	cout<<"Entre com o numero de elementos que serão ordenados : ";
	cin>>n;
	n++;
	int arr[n];
	for(i = 1; i < n; i++){
		cout<<"Entre com os elementos "<<i<<": ";
		cin>>arr[i];
	}
	// Constrói o heap de máximo
	Build_MaxHeap(arr, n-1);
	HeapSort(arr, n-1);
 
	// Mostra o vetor ordenado.
	cout<<"\nVetor ordenado : ";
 
	for (i = 1; i < n; i++)
		cout<<" "<<arr[i];
    cout << "\n";

	return 0;
}