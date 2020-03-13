#include <iostream>
#include <vector>
void qsort(std::vector<int>& a,int left,int right){
    if(left < right) {
        int temp = a[left];
        int i = left;
        int j = right;
        while(i < j){
            while(a[j] >= temp && i < j)
                j--;
            while(a[i] <= temp && i< j)
                i++;
            if(i < j){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        a[left] = a[i];
        a[i] = temp;
        qsort(a,left,j-1);
        qsort(a,i+i,right);
    }
}
int main()
{
    std::vector<int> numlist{3,2,8,4,9,6};
    qsort(numlist,0,numlist.size()-1);
    auto it = numlist.begin();
    while(it!=numlist.end()){
        std::cout << *it << " " ;
        it ++;
    }
    return 0;
}

