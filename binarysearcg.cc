#include <iostream>
#include <vector>
template<typename T>
int binaryserch(std::vector<T>& a,T size,T target){
    T left = 0,right = size,middle = 0;
    while(left < right){
        middle = (left+right)/2;
        if(target == a[middle]){
            return middle;
        }
        if(target < a[middle]){
            right = middle;
        }
        if(target > a[middle]){
            left = middle+1;
        }
    }
    return -1;
    
}
int main()
{
    std::vector<int> a{1,2,3,4,5,6,7,8,9,10};
    int res = binaryserch<int>(a,a.size()-1,6);
    std::cout << res ;
    return 0;
}

