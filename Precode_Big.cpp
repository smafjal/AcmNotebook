#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<algorithm>
#include<sstream>
#include<time.h>
#include<functional>
#include<utility>

typedef long long ll;
typedef unsigned long long ull; //scanf("%llu",&N);
#define mp          make_pair
#define pb          push_back
#define popcount(a) __builtin_popcount(a)
#define contain(x,item) (x).find(item)!=(x).end()
#define FOR(i,a,b)  for(int i=(a);i<b;i++)
#define REV(i,a,b)  for(int i=a;i>=b;i--)
#define PI          (2*acos(0))
#define clr(a)      a.clear()
#define SZ(a)       (int)a.size()
#define all(a)      (a).begin(),(a).end()
#define reall(a)    (a).rbegin(),(a).rend()
#define maximum(v)  *max_element(all(v))
#define minimum(v)  *min_element(all(v))
#define fs          first
#define sc          second
#define mem(a,b)    memset(a,b,sizeof(a))
#define READ(f)     freopen(f, "r", stdin)
#define WRITE(f)    freopen(f, "w", stdout)
#define ERR         1e-7
#define EQ(a,b)     (fabs(a-b)<ERR)
#define lookalike   scanf("%*c")
//#define FOREACH(it,x)for(__typeof((x.begin())) it=x.begin();it!=x.end();it++)
#define onlyCPP ios_base::sync_with_stdio(0);cin.tie(0);

template<class T1> void deb(T1 e){cout<<e<<endl;}
template<class T1,class T2> void deb(T1 e1,T2 e2){cout<<e1<<" "<<e2<<endl;}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3){cout<<e1<<" "<<e2<<" "<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;}

void BINARY(int n){cout<<"Mask: ";for(int i=10;i>=0;i--) if(n&(1<<i))cout<<1;else cout<<0;cout<<endl;}  /// BitPrint
template<class T>inline T sqr(T n){ return (n*n);}
template<class T>inline double LOG(T a,T b){return (log(a)/log(b));}
template<class T> T power(T B,T P){return (P==0)? 1: B*(power(B,P-1));}  /// B^P
template<class T> inline T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template<class T> inline T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/(gcd(a,b)));}
template<class T> T BigMod(T B,T P,T M)
{if(P==0)return 1;else if(P%2==0)return sqr(BigMod(B,P/2,M))%M;else return(B%M)*(BigMod(B,P-1,M))%M;}  /// (B^p)%M
template<class T>inline T MOD(T a,T b) {return (((a%b)+b)%b);} /// (a%b) for all positive and Negative number.

string toString(int a) {stringstream ss;ss<<a;string p;ss>>p;return p;}
string toStringL(long long a)  {stringstream ss;ss<<a;string p;ss>>p;return p;}
int toInt(string a){ stringstream ss;ss<<a;int p;ss>>p;return p;}
long long toLong(string a){ stringstream ss;ss<<a;long long p;ss>>p;return p;}
int Set(int n,int p) {return n=(n|(1<<p));}
int Clear(int n,int p) {return n=(n&~(1<<p));}
int Check(int n,int p) {return (n&(1<<p));}
int Toggle(int n,int p) {if(Check(n,p))return n=Clear(n,p);return n=Set(n,p);}

////bool operator<(const pq &x)const{return pw>x.pw;}};             //Min Priority_queue
////int rrr[]={1,0,-1,0};int ccc[]={0,1,0,-1};                      //4 Direction
////int rrr[]={1,1,0,-1,-1,-1,0,1};int ccc[]={0,1,1,1,0,-1,-1,-1};  //8 direction
////int rrr[]={2,1,-1,-2,-2,-1,1,2};int ccc[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
////int rrr[]={2,1,-1,-2,-1,1};int ccc[]={0,1,1,0,-1,-1};           //Hexagonal Direction
////int month[]={31,28,31,30,31,30,31,31,30,31,30,31};              //month

using namespace std;
typedef vector<int>     VI;
typedef vector<string>  VS;
typedef pair<int,int>   PII;
typedef pair<int,PII >  DPII;
typedef vector<pair<int,int> >VPII;
typedef vector<pair<int,pair<int,int> > > VDPII;

const int INF=(1<<28);
const int MAX=200009;

int main()
{
	//freopen("IN01.txt","r",stdin);
	//freopen("OUT01.txt","w",stdout);
    return 0;
}




