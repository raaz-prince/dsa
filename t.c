#include<stdio.h>
struct sjf {
    int bt;
    int at;
    int ct;
}p[5];

int Index[5]={0};
int btin[5]={0};

void ct( struct sjf p[],int a) {
int pos;
for(int i=0;i<a;i++) {
    pos=i;
    for(int j=0;j<a;j++) {
        if(p[j].bt < p[pos].bt && Index[j]==0)
        pos=j;
    }
    Index[pos]=1;
    btin[i]=pos;
    printf("%d\n",pos);
}
printf("%d",p[1].bt);
}

int main() {

p[0].at=1;
p[1].at=2;
p[2].at=3;
p[3].at=4;
p[4].at=5;
p[0].bt=8;
p[1].bt=6;
p[2].bt=4;
p[3].bt=3;
p[4].bt=5;
printf("%d\n",sizeof(p));
ct(p,5);
// for(int i=0;i<5;i++) {
//     int temp=btin[i];
//     printf("%d\n",p[temp].bt);
// }
//printf("%d",p[0].bt);
return 0;
}