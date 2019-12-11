vector<int> Solution::twoSum(const vector<int> &A, int B) {
    map<int,int> myMap;
    vector<int>res;
    if(A.size()<2)return res;
    for(int i=0;i<A.size();i++){
        int key = B-A[i];
        if(myMap.find(key)!=myMap.end()){
            res.push_back(myMap[key]+1);
            res.push_back(i+1);
            return res;
        }
        if(myMap.find(A[i]) == myMap.end())
        {
            myMap[A[i]] = i;
        }
    }
    return res;
}
