#include<bits/stdc++.h> 
using namespace std;
struct Student{
  string Name;
  string gender;
  double Mark;
  string Result;
};
bool myCmp(const Student a, const Student b)
{
  return a.Mark < b.Mark;
}
void Input(vector <Student> a, int n)
{
  for(int i = 0 ; i < n; i++)
  {
    Student st;
    cout <<"Student information "<<i+1<<endl;
    cout <<"Name : ";fflush(stdin); getline(cin, st.Name);
    cout <<"Gender : ";fflush(stdin); getline(cin, st.gender);
    cout <<"Mark : "; cin >> st.Mark;
    if(st.Mark >= 5)
    {
       st.Result = "PASS!!!\n";
    }else{
      st.Result = "FAIL!!!\n";
    }
    a.push_back(st);
    cout << st.Result;
  }
}
int main()
{
   vector <Student> a;
   int n;
   cout <<"Input n : "; cin >> n;
   Input(a,n);
    ofstream ou("C:\\Users\\ADMIN\\Desktop\\OOP C++\\data.txt");
    sort(a.begin(), a.end(), myCmp);
		for(int i = 0 ; i < a.size(); i++)
		{
			ou << a[i].Name<<","<<a[i].gender <<","<< a[i].Mark <<","<<a[i].Result<< endl;
		}
	ou.close();
  //  ifstream in()
	cout <<"Complete !!!";
}
