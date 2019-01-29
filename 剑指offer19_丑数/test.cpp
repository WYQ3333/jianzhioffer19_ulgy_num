#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//��ֻ����������2��3��5��������������Ugly Number����
//����6��8���ǳ�������14���ǣ���Ϊ������������7��
//ϰ�������ǰ�1�����ǵ�һ���������󰴴�С�����˳��ĵ�N��������

class Solution {
public:

	bool Is_zhishu(int index){
		int i = 0;
		if (index == 1){
			return true;
		}
		for (i = 2; i < index; ++i){
			if (index%i == 0){
				return false;
			}
		}
		return true;
	}
	int GetUglyNumber_Solution(int index) {
		int i = 7;
		int count = 6;
		if (index <= 6){
			return index;
		}
		for (i = 7; count < index; ){
			if ((i % 7 != 0 )&& (!Is_zhishu(i))){
				++count;
			}
			++i;
		}
		/*while (count < index){
			if (i % 7 == 0 || Is_zhishu(i)){
				++i;
				continue;
			}
			++count;
			++i;
		}*/
		return i-1;
	}
};

void TestFunc(){
	Solution s;
	cout << s.Is_zhishu(11) << endl;

	cout << s.GetUglyNumber_Solution(1500) << endl;
}

class Solution1 {
public:
	int GetUglyNumber_Solution(int index) {
		// 0-6�ĳ����ֱ�Ϊ0-6
		if (index < 7) return index;
		//p2��p3��p5�ֱ�Ϊ�������е�ָ�룬newNumΪ�Ӷ���ͷѡ��������С��
		int p2 = 0, p3 = 0, p5 = 0, newNum = 1;
		vector<int> arr;
		arr.push_back(newNum);
		while (arr.size() < index) {
			//ѡ����������ͷ��С����
			newNum = min(arr[p2] * 2, min(arr[p3] * 3, arr[p5] * 5));
			//������if�п��ܽ���һ�����߶��������������������ͷ��С�����ж�������
			if (arr[p2] * 2 == newNum) p2++;
			if (arr[p3] * 3 == newNum) p3++;
			if (arr[p5] * 5 == newNum) p5++;
			arr.push_back(newNum);
		}
		return newNum;
	}
};

void TestFunc2(){
	Solution1 s;
	cout << "��1500������Ϊ" << endl;
	cout << s.GetUglyNumber_Solution(1500) << endl;
}

int main(){
	TestFunc2();
	system("pause");
	return 0;
}