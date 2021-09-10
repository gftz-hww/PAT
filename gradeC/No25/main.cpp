#include <iostream>
using namespace std;
struct mydata
{
    int adr;
    int num;
    int next;
} datas[100001];

int main()
{
    int address, N, K;
    mydata temp[100001];
    int adr;
    int i;
    cin >> address >> N >> K;
    for (i = 0; i < N; i++)
    {
        cin >> adr;
        datas[adr].adr = adr;
        cin >> datas[adr].num >> datas[adr].next;
    }
    i = 0;
    while (address != -1)
    {
        temp[i].adr = datas[address].adr;
        temp[i].next = datas[address].next;
        temp[i].num = datas[address].num;
        i++;
        address = datas[address].next;
    }
    int j=0,length=0;
    while(length+K<=i){
        length+=K;
        for(j=length-1;j>=length-K;j--)
            if(j-1>=length-K)
                printf("%05d %d %05d\n",temp[j].adr,temp[j].num,temp[j-1].adr);     //  正常点后继为下一个点的地址
            //特殊点处理
            else if(j==length-K&&length==i)
                printf("%05d %d -1\n",temp[j].adr,temp[j].num);     //  该组中最后一个点且为整个数组的最后一个点
            else if(j==length-K&&length+K<=i)
                printf("%05d %d %05d\n",temp[j].adr,temp[j].num,temp[length+K-1].adr);      //  该组的最后一个点，但后面还有可反转的组。后继为可反转组的最后一个点的地址
            else if(j==length-K&&length+K>i)
                printf("%05d %d %05d\n",temp[j].adr,temp[j].num,temp[length].adr);      //  该组的
            else if(j==length-K&&length+K==i)
                printf("%05d %d %05d\n",temp[j].adr,temp[j].num,temp[length+K-1].adr);
    }
        
    for(int j=length;j<i;j++)
        if(temp[j].next!=-1)
                    printf("%05d %d %05d\n",temp[j].adr,temp[j].num,temp[j].next);
                else
                    printf("%05d %d %d\n",temp[j].adr,temp[j].num,temp[j].next);
}