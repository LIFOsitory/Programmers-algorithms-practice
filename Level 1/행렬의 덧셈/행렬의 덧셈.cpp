#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > sumMatrix(vector<vector<int> >A, vector<vector<int> >B)
{
	vector<vector<int> > answer;
  vector<int> Tmp;
  int i,j;

	 for (i = 0; i < A.size(); i++){
        Tmp.clear();
        for (j = 0; j < A[0].size(); j++){
            Tmp.push_back(A[i][j] + B[i][j]);
        }
        answer.push_back(Tmp);
   }
	return answer;
}
int main()
{
	vector<vector<int> > a{{1,2},{2,3}}, b{{3,4},{5,6}};
	vector<vector<int> > answer = sumMatrix(a,b);

	for(int i=0;i<answer.size();i++)
	{
		for(int j=0;j<answer[0].size();j++)
		{
			cout<<answer[i][j]<<" ";
		}
		cout<<"\n";
	}
}

