#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i];

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == n) cnt++;
    }
    cout << n << " occurs " << cnt " times\n";

    return 0;
}
