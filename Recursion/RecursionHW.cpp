#include <iostream>
#include <functional>

int main(){
    int B[] = {3, 15, 7, 22, 9};
    int n = sizeof(B) / sizeof(B[0]);

    std::function<int(int[], int)> getMin;

    // LINE-1
    getMin = [&getMin](int arr[], int n) -> int ->
 {
        return (n == 1) ? arr[0] :
               std::min(arr[n-1], getMin(arr, n-1));
    };

    std::cout << getMin(B, n);
    return 0;
}