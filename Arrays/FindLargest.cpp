#include <bits/stdc++.h>
using namespace std;
// App1 :
int sortArr(vector<int>& a)
{
    sort(a.begin(), a.end());
    return a[a.size()-1];
}// O(n log n) : O(1)
// App2 
int MinArr(vector<int>& a)
{
    int maxi= INT_MIN;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i] > maxi) 
        {
            maxi= a[i];
        }
    }
    return maxi;
} // O(n) : O(1)
int main()
{
    vector<int> arr1 = {2,5,1,3,0};
    for(int i=0; i<arr1.size(); i++)
    {
        cout<<arr1[i]<<" "<<endl;
    }
  int ans = sortArr(arr1);
   cout << "Smallest ele in  array is:" <<ans<< endl;
  int ans1 = MinArr(arr1);
   cout << "Smallest ele in  array is:" <<ans1<< endl;

return 0;
}

// O(nlog n)
// O(1)