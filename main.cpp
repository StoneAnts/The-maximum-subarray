#include<iostream>
#include"max_array.h"
using namespace std;
int main()
{
	int a[6];
	int i;
	cout << "请输入大小为6的数组:" << endl;
	for( i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
	i--;
	cout << FIND_MAXIMUM_SUBARRAY(a, 0, i); //传入数组及其起始位置下标和终止为止下标，返回最大子数组的值

	return 0;
}
