//
// Created by cucol on 30.01.2022.
//

int vec1[max_n];
signed main(){
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> vec[i];
    }
    int b, c, d, questions;
    cin >> questions;
    while (questions--) {
        cin >> a;
        if (a == "u"){
            vec1[b - 1] = c;
        }
        else {
            int ans = 0,zeros = 0;
            for(int i = b-1, i < c; i++){
                if(vec1[i]=="0"){
                    zeros++;
                    if(zeros==d){
                        ans = i-1;
                    }
                }
            }
            cout << ans << endl;
        }
    }
}