#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <climits>


using namespace std;

vector<tuple<int,int,int>> graph;

class bellman_ford{
//	vector<tuple<int,int,int>> graph;				//
	public:
	int distance[6];
	bellman_ford(vector<tuple<int,int,int>>& graph){		//constructor
		graph.push_back({1,2,-1});
		graph.push_back({1,3,2});
		graph.push_back({1,4,7});
		graph.push_back({2,4,3});
		graph.push_back({2,5,4});
		graph.push_back({3,4,3});
		graph.push_back({4,5,2});
		cout << "graph constructed" << endl;
		for(int i = 0; i<6; i++) distance[i] = INT_MAX;
	}

	int shortest_path(vector<tuple<int,int,int>>& graph, int s, int d){
		distance[s] = 0;
		for(int  i = 0; i<=5; i++){
			for(auto e : graph){
				int a,b,w;
				tie(a,b,w) = e;
				distance[b] = min(distance[b], distance[a]+w);
			}
		}
//		for(int i = 0; i<6; i++)cout << distance[i] << " ";
//		cout << endl << endl;

		return distance[d];
	}

	void printer(){
		for(int i = 0; i < graph.size(); i++){
			cout << get<0>(graph[i]) << " " << get<1>(graph[i]) << " " << get<2>(graph[i]) << endl;
		}
	}

};

int main(){
//	bellman_ford graph;
//	graph.printer();
	bellman_ford* b = new bellman_ford(graph);
	cout << "Enter source : ";
	int s,d;
	cin>>s;
	cout << "Enter distination :  ";
	cin>>d;
	cout << "shortest_path  = " << b->shortest_path(graph,s,d) << endl;
//	cout << b->distance[5] << endl;
//	b->printer();


	return 0;
}
