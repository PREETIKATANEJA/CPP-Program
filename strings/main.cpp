#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int testCases, i;
    cin>>testCases;
    for(i=0; i<testCases; i++){
		int n, s[n], totalMisses=0, diff;
		cin >> n;
		for (i = 0; i < n; i++)
        cin >> s[i];
		for (i = 0; i < n - 1; i++) {
        diff = abs(s[i + 1] - s[i]) - 1;
        totalMisses = totalMisses + diff;
		}
		return totalMisses;
    }

}
