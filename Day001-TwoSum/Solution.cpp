#include<vector>
#include<unordered_map>
#include<iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> complementMap;
	vector<int> result;
	for(int i = 0; i <nums.size(); i++) {
		int complement = target - nums[i];
		if(complementMap.find(complement) != complementMap.end()) {
			result.push_back(complementMap[complement]);
			result.push_back(i);
			break;
		}
	complementMap[nums[i]] = i;
	}
return result;
}

int main() { 
	vector<int> nums = {3, 3};
	int target = 6;
	vector<int> result = twoSum(nums, target);
	if(result.size() == 2) {
		cout<<"["<<result[0]<<", "<<result[1]<<"]"<<endl;
	}
	else {
		cout<<"No Pair Found!!"<<endl;
	}
	return 0;
}
