#include <bits/stdc++.h>
using namespace std;

class heap{
public:
	vector<int> v;
	void insert(int val){
		v.push_back(val);
		int ci = v.size() - 1;
		int pi = (int)((ci-1)>>1);
		if(ci>0)
			while(v[pi] > v[ci]){
				int temp = v[ci];
				v[ci] = v[pi];
				v[pi] = temp;
				ci = pi;
				pi = (int)((ci-1)>>1);
				if(ci == 0)
					break;
			}
	}
	void display(){
		for(int i=0 ; i<v.size() ;i++)
			cout<<v[i]<<endl;
	}
};

int main(int argc, char const *argv[])
{
	heap h;
	h.insert(1);
	h.insert(3);
	h.insert(6);
	h.insert(5);
	h.insert(9);
	h.insert(8);
	h.insert(-2);
	h.display();
	return 0;
}