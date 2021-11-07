#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lcm(int a, int b){
	return a*b/__gcd(a, b);
}
template<typename T> class cpoint
{
	public:

	T x, y, z;
	cpoint(T tempx, T tempy, T tempz)
	{
		x=tempx;
		y=tempy;
		z=tempz;
	}
	cpoint operator+(cpoint b)
	{
		return cpoint(this->x+b.x, this->y+b.y, this->z+b.z);
	}
	cpoint& operator+=(cpoint b)
	{
		*this=*this+b;
		return *this;
	}
};

template<typename T>T dot(cpoint<T>a, cpoint<T>b){
	return a.x*b.x+a.y*b.y+a.z*b.z;
}

template<typename T> double ang(cpoint<T>a, cpoint<T>b){
	return acos(dot(a,b)/sqrt(dot(a,a)*dot(b,b)));

}
void pairsort(int a[], int b[], int n){
	vector<pair<int, int>> v(n);
	for(int i=0; i<n; i++){
		v[i]=make_pair(a[i],b[i]);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++){
		a[i]=v[i].first;
		b[i]=v[i].second;
	}
	return;
}
int main(){
	

	double x, y, z, x1, y1, z1;
	cin>>x>>y>>z>>x1>>y1>>z1;
  cpoint<double> a(x,y,z);
  cpoint<double> b(x1,y1,z1);
  //t +=t1;
  
  //cout<<t.x<<" "<<t.y<<" "<<t.z<<endl;
  /*
  int n;
  cin>>n;
  int a[n], b[n];
  for(int i=0; i<n; i++){
  	cin>>a[i]>>b[i];
  }
  pairsort(a, b, n);
  for(int i=0; i<n; i++){
  	cout<<a[i]<<" "<<b[i]<<endl;
  }
  */
  cout<<ang(a,b)<<endl;
    
    return 0;

}
