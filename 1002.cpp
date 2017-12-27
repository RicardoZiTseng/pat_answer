#include <cstdio>
using namespace std;
const int max_num = 1000 + 5;
int main(){
    float coe[max_num] = {0.0};
    int max_coe = 0, cnt_ex=0, cnt;
    for(int i=0; i<2; i++){
        scanf("%d", &cnt);
        for(int j=0; j<cnt; j++){
            int ex;
            float co;
            scanf("%d %f", &ex, &co);
            if(coe[ex] == 0) cnt_ex += 1;
            coe[ex] += co;
            if(max_coe < ex)
                max_coe = ex;
        }
    }
    printf("%d", cnt_ex);
    for(int i=max_coe; i>=0; i--){
        if(coe[i] != 0){
            printf(" %d %.1f", i, coe[i]);
        }
    }
    return 0;
}
