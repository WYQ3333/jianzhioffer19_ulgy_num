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

	cout << s.GetUglyNumber_Solution(10) << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}