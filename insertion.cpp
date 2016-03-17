#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<int> insertion_sort(vector<int> a){
	int i;
	int key;
	for(int j=1;j<a.size();j++){
		key=a[j];
		i=j-1;
		while(i>-1 && a[i]< key){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	return a;
}
void imprimir(vector<int> a){
	for(int i=a.size()-1;i>=0;i--)
			cout<<a[i]<<endl;

}


int main(){
	std::vector<int> v;
	v.push_back(31);
	v.push_back(41);
	v.push_back(59);
	v.push_back(26);
	v.push_back(41);
	v.push_back(58);
	imprimir(insertion_sort(v));
	//imprimir(v);
	//std::vector<int> a;


	

	return 0;

};

