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
		int i = 1;
		int count = 0;
		while (count < index){
			if (i % 7 == 0 || Is_zhishu(i)){
				continue;
			}
			++count;
		}
	}
};

void TestFunc(){

}

int main(){
	TestFunc();
	system("pause");
	return 0;
}