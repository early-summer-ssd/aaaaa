#include <iostream>
#include <string>
using namespace std;
string Zhong;
string Hou;
bool exitt = false;
void did(string x, string xx)
{
    int leng = x.length();
    if (leng == 1)
    {
        cout << x[0] << endl;
        return;
    }
    char root = xx[leng - 1];
    cout << root << endl; //输出根
    int index;
    for (int i = 0;; i++)
    { //找
        if (Zhong[i] == root)
        {
            index = i;
            break;
        }
    }
    string l = Zhong.substr(0, index);
    string ll = Hou.substr(0, index);
    cout<<"L"<<l;

    
    if (root != x[leng - 1]) //如果有右树
    {
        string r = Zhong.substr(index + 1, leng - 1);
        string rr = Hou.substr(index, leng - 2);
        did(l, ll);
        did(r, rr);
    }
    else
    {
        did(l, ll);
    }


    return;
}

/*
void did2()
{
    char Root = Hou[len-1];
    cout <<Root<<endl;//输出根
    int index;
    for(int i = 0;;i++){//找
        if(Zhong[i] == Root){
            index = i;
            break;
        }
    }

    string l = Zhong.substr(0,index);
    string r = Zhong.substr(index+1,len-1);

    string ll = Hou.substr(0,index);
    string rr = Hou.substr(index,len-2);


}
*/
int main()
{

    cin >> Zhong >> Hou;

    if (Zhong.length() == 0)
        return 0;

    did(Zhong, Hou);
    
    return 0;
}