#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void imprimir(vector<int> a){
    for(int i=0;i<a.size();i++)
            cout<<a[i]<<endl;

}
vector<int> merge(vector<int> & a,int p,int q,int r){
    int n1= q-p+1;
    int n2= r-q;
    vector<int> L;
    vector<int> R;
    int i;
    int j;
    for(i=1;i<=n1;i++)
        L.push_back(a[p+i-1]);
    //imprimir(L);
    //cout<<'h'<<endl;
    for(j=1;j<=n2;j++)
        R.push_back(a[q+j]);
    //imprimir(R);
    //cout<<'e'<<endl;
    L.push_back(100000);
    R.push_back(100000);    
    i=0;
    j=0;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
         }
    }
    return a;
}

void merge_sort(vector<int> &a,int p,int r){
        int q;
        if (p<r){
            q=(p+r)/2;
            merge_sort(a,p,q);
            merge_sort(a,q+1,r);
            merge(a,p,q,r);
            }

}



int main(){
    std::vector<int> v;
    v.push_back(31);
    v.push_back(41);
    v.push_back(59);
    v.push_back(26);
    v.push_back(41);
    v.push_back(58);
    v.push_back(-1);
    merge_sort(v,0,6);
    imprimir(v);
    //cout<<v[0]<<endl;
    //imprimir(v);
    //merge_sort(v,1,v.size());

    //cout<<v.size()<<endl;
    //imprimir(v);
    //std::vector<int> a;


    

    return 0;

};
