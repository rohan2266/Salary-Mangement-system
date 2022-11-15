#include <bits/stdc++.h>
using namespace std;

bool require_stuffing(string str, int len, string front_frame, string end_frame){
    int front_frame_len = front_frame.length();
    char ch[100];
    int end_frame_len = end_frame.length();
    for(int i=0;i<end_frame_len;i++){
        ch[i] = end_frame[i];
    }

    int counter = 0,cnt = 0;
    bool flag = true;
    for(int i=front_frame_len;i<len-end_frame_len;i++){
        if(str[i] == ch[counter]){
            cnt++;
            counter++;
        }
        else if(cnt == end_frame_len){
            flag = false;
            break;
        }
        else{
            counter = 0;
            cnt = 0;
        }
    }
    if(flag == true){
        cout<< "It doesn't requires Stuffing! All Good :)" << endl;
        return false;
    }
    else{
        cout<< "It requires stuffing!" << endl;
        return true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str = "yyy This is my Data uuu";
    int n = str.length();
    string front_frame = "yyy";
    string end_frame = "uuu";
    require_stuffing(str,n,front_frame,end_frame);
    return 0;
}