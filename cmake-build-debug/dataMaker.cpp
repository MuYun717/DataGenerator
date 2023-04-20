//
// Created by yingx on 2023/4/20.
//
#include<bits/stdc++.h>
using namespace std;
mt19937 rnd(std::random_device{}());
int main(int argc,char* argv[]){
    int num = atoi(argv[1]);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    if(num<=5){
        a=rnd()%10;
        b=rnd()%10;
    }else{
        a=rnd()%100+100;
        b=rnd()%100+100;
    }
    cout<<a<<" "<<b;
}