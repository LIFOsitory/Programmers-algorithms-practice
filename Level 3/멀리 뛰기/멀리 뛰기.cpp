#include<iostream>
#include<vector>
using namespace std;

int jumpCase(int n)
{
	int answer = 0;
	if (n > 0) {
		answer += jumpCase(n - 1);
		answer += jumpCase(n - 2);
	}
	else if (n == 0) {
		return 1;
	}
	else {
		return 0;
	}
	return answer;
}

int main()
{
	int test = 4;

	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << jumpCase(test);
}
