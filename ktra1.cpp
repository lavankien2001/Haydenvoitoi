#include <iostream>
#include <fstream>
using namespace std;
class BaiTap {
    public:
        float arr[100000];
        int n;
    public:
        void insertionSort() { 
            float key;
            int i, j; 
            for (i = 1; i < n; i++) { 
                key = arr[i]; 
                j = i - 1; 
                while (j >= 0 && arr[j] < key) { 
                    arr[j + 1] = arr[j]; 
                    j = j - 1; 
                } 
                arr[j + 1] = key; 
            } 
        }
        void doctep() {
            fstream f;
            f.open("input.dat", ios::in);
            f >> n;
            for(int i = 0; i < n; i++) 
                f >> arr[i];
            f.close();
        }
        void ghitep() {
            fstream f;
            f.open("output.dat", ios::out);
            for(int i = 0; i < n; i++) {
                f << arr[i] << " ";
            }
            f.close();
        }
};
int main() {
    BaiTap baitap;
    baitap.doctep();
    baitap.insertionSort(); 
    baitap.ghitep();
    return 0;
}

