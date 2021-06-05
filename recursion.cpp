//Recursion - A func call itself directly(func 1 calling 1 directly)
//or indirectly(func 1 calling 2 and then 2 calling 1=> 1 calling 1  indirectly)

//1st program
/*
#include<bits/stdc++.h>
using namespace std;
void fun1(){
cout<<"GFG"<<endl;
fun1();
}

int main(){
fun1();
return 0;
}
*/
//this gives us segmentation fault




// 2nd program
/*
#include<bits/stdc++.h>
using namespace std;
void fun1(int n){
    if(n==0)      //base case-terminating condition
        return;
    cout<<"GFG"<<endl;
    fun1(n-1);
}
int main(){
fun1(2);
return 0;
}
*/

//Every iterative code can be done with recurrsion and vice versa

//Applications of recursion

/*
 Dynamic programming
 Backtracking
 Divide and conq(binary search,quick sort,merge sort)

 //many problems like
 Power of hanoi
 Dfs based traversals (DFS of graph and inorder/preorder/postorder traversal of tree)
 Real lyf e.g of DFS is searching a file in Lappy which is in many subfolderss
*/
