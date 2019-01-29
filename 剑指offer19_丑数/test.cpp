#include<iostream>
using namespace std;

//把只包含质因子2、3和5的数称作丑数（Ugly Number）。
//例如6、8都是丑数，但14不是，因为它包含质因子7。
//习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。

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