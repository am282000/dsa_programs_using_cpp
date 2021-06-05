/*
advantages of vector
1. dynamic size
2. Rich library function - find,erase,insert rtc.
3. Easy to know the size
 e.g.
 int func(vector<int>v){
      int n =v.size();
}
on the other hand in array it is
int func(int arr[],int n{
         int n= sizeof(arr)/size of(arr[0]);
}
4. No need to pass size
5. Can be returned from a function
vector<int> fun(){
    vector<int>v;
    return v;
}
but in array we cannot do so if it a local array
int *func(){
    int arr[100];
    return arr;
}
//this is wrong but we can do it like this
int *func(){
    int *arr=new int[100];
    return arr;
}
6.by default initialised with default values - it saves time
in int,float,double,string,char=0  for bool = false
7. we can copy a vector to other by v1=v2;
*/

/*
=>In java this is termed as Arraylist we can use it as
=> Arraylist<Integer>al=new Arraylist<Integer>();  //or we can pass value like(10) if wanaa make it simple array.
*/
