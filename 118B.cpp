/**
 God is  not finished yet ! your blessings , your healings and
 you miracle is comming !

 JUST DONT'T GIVE UP !!
 **/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll ;
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n , p , s ;
int main() {
	timesaver  ;
	cin >> n ;
	for ( ll i = 0 ; i < n ; i ++ )
	cout << " "<< " ";
	cout << '0'  ;
	cout << endl ;
	for ( ll i = 1 ; i <= n ; i ++ )
	{
		p = 0 , s = n - i ;
		for ( ll j = 0 ; j <= n  ; j ++ )
		{
			if ( s > 0  )
			{
				cout << " " <<" ";
				s-- ;
			}
			else
			{
				cout << p << " " ;
				p ++ ;
			}
		}
		p = i - 1 ;
		for ( ll j = n + 1  ; j < 2 * ( n + 1) - 1   ; j ++ )
		{
			if ( p > 0 )
			{
				cout << p << " " ;
				p -- ;
			}
			if ( p == 0 ) cout << 0 , p -- ;
		}
		cout << endl ;
	}

	for ( ll i =  n - 1  ; i > 0 ; i -- )
	{
		p = 0 , s = n - i ;
		for ( ll j = 0 ; j <= n  ; j ++ )
		{
			if ( s > 0  )
			{
				cout << " " <<" ";
				s-- ;
			}
			else
			{
				cout << p << " " ;
				p ++ ;
			}
		}
		p = i - 1 ;
		for ( ll j = n + 1  ; j < 2 * ( n + 1) - 1   ; j ++ )
		{
			if ( p >0 )
			{
				cout << p << " " ;
				p -- ;
			}
			if ( p == 0 ) cout << p ,p -- ;

		}
		cout << endl ;
	}
	for ( ll i = 0 ; i < n ; i ++ )
	cout << " " << " " ;
	cout << '0'  ;
	// your code goes here
	return 0;
}
