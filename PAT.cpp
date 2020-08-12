#include<stdio.h>
#include<stdlib.h>

//输入第一行给出 3 个正整数，分别为：N（≤105），即考生总数；
//L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；H（ < 100），为优先录取
//德分和才分均不低于此线的被定义为“才德全尽”此类考生按德才总分从高到低排序；
//才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；
//德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；
//其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。随后 N 行，
//每行给出一位考生的信息，包括：准考证号 德分 才分，其中准考证号为 8 位整数，德才分为区间[0, 100] 内的整数。
//数字间以空格分隔。
//输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，
//每行按照输入格式输出一位考生的信息，考生按输入中说明的规则从高到低排序。
//当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。
typedef struct {
	int num;
	int d;
	int c;
	stu* next;
}stu;
void add(stu* head, stu* a2) {
	stu* flag1 = head;
	stu* flag2 = flag1->next;
	while (flag2) {
		if (a2->c + a2->d > flag1->d + flag1->c) {
		   
		}
	}
}
int main() {
	int N, L, H;
	
	scanf("%d%d%d", N, L, H);
	int tip = N-1;
	stu* box = (stu*)malloc(N * sizeof(stu));
	int a1, a2, a3;
	for (int i = 0;i < N;i++) 
		scanf("%d%d%d", &box[i].num, &box[i].d, &box[i].c);
	
	
	return 0;
}
