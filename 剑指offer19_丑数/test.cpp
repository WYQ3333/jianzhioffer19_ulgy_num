#include<iostream>
using namespace std;

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
		for (i = 1; i < index; ++i){
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
		for (i = 7, count = 6; count < index; ++count, ++i){
			if (i % 7 == 0 || Is_zhishu(i)){
				continue;
			}
		}
		/*while (count < index){
			if (i % 7 == 0 || Is_zhishu(i)){
				++i;
				continue;
			}
			++count;
			++i;
		}*/
		return i;
	}
};

void TestFunc(){
	Solution s;
	cout << s.GetUglyNumber_Solution(8) << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}