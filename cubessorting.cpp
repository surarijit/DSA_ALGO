
// Problem : A. Cubes Sorting
// Contest : Codeforces - Codeforces Round #672 (Div. 2)
// URL : https://codeforces.com/contest/1420/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
    ARIJIT SUR 
    @duke_knight
    @surcode
    @comeback
    IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<ll>
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<ll,ll>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(ll i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(ll i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned ll
using namespace std;
 // C++ program to count number 

/* This function merges two sorted arrays and returns inversion 
count in the arrays.*/
ll merge(ll arr[], ll temp[], ll left, ll mid, ll right) 
{ 
    ll inv_count = 0; 

    ll i = left; /* i is index for left subarray*/
    ll j = mid; /* i is index for right subarray*/
    ll k = left; /* i is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) 
    { 
        if (arr[i] <= arr[j]) 
            temp[k++] = arr[i++]; 
        else
        { 
            temp[k++] = arr[j++]; 

            /* this is tricky -- see above explanation/ 
            diagram for merge()*/
            inv_count = inv_count + (mid - i); 
        } 
    } 

    /* Copy the remaining elements of left subarray 
    (if there are any) to temp*/
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 

    /* Copy the remaining elements of right subarray 
    (if there are any) to temp*/
    while (j <= right) 
        temp[k++] = arr[j++]; 

    /*Copy back the merged elements to original array*/
    for (i=left; i <= right; i++) 
        arr[i] = temp[i]; 

    return inv_count; 
} 

/* An auxiliary recursive function that sorts the input 
array and returns the number of inversions in the 
array. */
ll _mergeSort(ll arr[], ll temp[], ll left, ll right) 
{ 
    ll mid, inv_count = 0; 
    if (right > left) 
    { 
        /* Divide the array llo two parts and call 
        _mergeSortAndCountInv() for each of the parts */
        mid = (right + left)/2; 

        /* Inversion count will be sum of inversions in 
        left-part, right-part and number of inversions 
        in merging */
        inv_count = _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid+1, right); 

        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid+1, right); 
    } 

    return inv_count; 
} 

/* This function sorts the input array and returns the 
number of inversions in the array */
ll countSwaps(ll arr[], ll n) 
{ 
    ll temp[n]; 
    return _mergeSort(arr, temp, 0, n - 1); 
} 


void solve(){
    ll n; cin>>n; vi a(n); input(a);
    ll arr[n];
    for(ll i=0;i<n;i++) arr[i] = a[i];
    if(countSwaps(arr, n)> n*(n-1)/2-1) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}