#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
 
void sub_lista(vector<int> &a, vector<int> &b)
{
	vector<int> p(a.size());
	int u, v;//dos indices que me ayudaran a verificar el pare de mis comparaciones
 
	if (a.empty()) return ;//si mi vector esta vacio
 
	b.push_back(0);//supone el primer valor del vector con 0 para poder comprobar con el siguiente
 
	for (int i = 1; i < a.size(); i++) 
        {
		if (a[b.back()] < a[i]) 
                {
			p[i] = b.back();
			b.push_back(i);
			continue;
		}
		for (u = 0, v = b.size()-1; u < v;) 
                {
			int c = (u + v) / 2;
			if (a[b[c]] < a[i]) u=c+1; else v=c;
		}
 
		if (a[i] < a[b[u]]) 
                {
			if (u > 0) p[i] = b[u-1];
			b[u] = i;
		}	
	}
 
	for (u = b.size(), v = b.back(); u--; v = p[v]) b[u] = v;

	for (int i = 0; i < b.size(); i++)
		cout << a[b[i]]<<endl;    
 
}
 
#include <cstdio>
int main()
{
	int a[] = { 0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
	vector<int> principal(a, a+sizeof(a)/sizeof(a[0]))  // como pasar un array a un vector , de un array a[] a vector principal; 
	vector<int> sub_array;                               
    sub_lista(principal, sub_array);

	return 0;
}

