#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	int num_queries = 0;
	int lastAnswer = 0;
	cin >> n >> num_queries;

	std::vector <vector<int>> arr(n);
	std::vector <int> answers;

	for(int i = 0; i < num_queries; i++){
		int x;
		int queryType;
		int y;
		int idx;
		cin >> queryType >> x >> y;
		
		if (queryType == 1)
		{
			idx = ((x^lastAnswer)%n);
			arr[idx].push_back(y);
		}else if(queryType == 2){
			idx = ((x^lastAnswer)%n);
			lastAnswer = arr[idx][y%arr[idx].size()];
			answers.push_back(lastAnswer);
		}
	}
	
	for(int i: answers){
		cout << i << endl;
	}
	
}