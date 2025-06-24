#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, vector<int> &temp, int low, int mid, int high) {
    int i = low;     // low to mid
    int j = mid + 1; // mid+1 to high
    int y = 0;

    while(i <= mid && j <= high) {
        if(arr[i] <= arr[j]) {
            temp[y++] = arr[i++];
        } else {
            temp[y++] = arr[j++];
        }
    }

    while(i <= mid) {
        temp[y++] = arr[i++];
    }

    while(j <= high) {  // fix: was using `i` instead of `j`
        temp[y++] = arr[j++];
    }

    for(int k = low, x = 0; k <= high; k++, x++) {
        arr[k] = temp[x];
    }
}

void mergesort(vector<int> &arr, vector<int> &temp, int low, int high) {
    if(low >= high) return;

    int mid = (low + high) / 2;

    mergesort(arr, temp, low, mid);
    mergesort(arr, temp, mid + 1, high);

    merge(arr, temp, low, mid, high);
}

int main() {
    int arr[] = {12, 14, 112, 113, 15, 19, 100};
	vector<int> data(arr, arr + sizeof(arr) / sizeof(int));

    vector<int> temp(data.size());

    mergesort(data, temp, 0, data.size() - 1);

    for(int i = 0; i < data.size(); i++) {
        cout << data[i] << endl;
    }

    return 0;
}

