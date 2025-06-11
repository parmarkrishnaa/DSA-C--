#include<iostream>
using namespace std;

class Selection_Sort{
    public:
        int min_index, temp;

        void selection_sort_asc(int arr[], int n){
            for(int i = 0; i < n - 1; i++)
            {
                for(int j = i + 1; j < n; j++)
                {
                    min_index = i;
                    if(arr[j] < arr[min_index])
                    {
                        min_index = j;
                    }
                    temp = arr[i];
                    arr[i] = arr[min_index];
                    arr[min_index] = temp;
                }
            }
        }

        void selection_sort_desc(int arr[], int n){
            for(int i = 0; i < n - 1; i++)
            {
                for(int j = i + 1; j < n; j++)
                {
                    min_index = i;
                    if(arr[j] > arr[min_index])
                    {
                        min_index = j;
                    }
                    temp = arr[i];
                    arr[i] = arr[min_index];
                    arr[min_index] = temp;
                }
            }
        }

        void print_array(int arr[], int n){
            for(int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    Selection_Sort sort;

    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << endl;

    cout << "Original array: ";
    sort.print_array(arr, n);

    sort.selection_sort_asc(arr, n);

    cout << endl;

    cout << "Ascending array: ";
    sort.print_array(arr, n);

    sort.selection_sort_desc(arr, n);

    cout << "Descending array: ";
    sort.print_array(arr, n);

    return 0;
}