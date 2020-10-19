/*int count(int n){
    if(n == 0){
        return 1;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}
*/



int count(int n){
    if(n == 0){
        return 0; //change this line's return to 0 
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}
