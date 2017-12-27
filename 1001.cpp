#include <stack>
#include <cstdio>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main(){
    int a, b, sum_;
    stack<char> s;
    string res;
    stringstream ss;
    scanf("%d %d", &a, &b);
    sum_ = a + b;
    if(sum_ < 0){
        sum_ = -1 * sum_;
        printf("-");
    }
    ss << sum_;
    ss >> res;
    int cnt = 0;
    for(int i=res.size()-1; i>=0; i--){
        cnt += 1;
        s.push(res[i]);
        if((cnt % 3 == 0) && (cnt<res.size())){
            s.push(',');
        }
    }
    while(!s.empty()){
        printf("%c", s.top());
        s.pop();
    }
    return 0;
}
