int Solution::colorful(int A) {
       if(A == NULL){
        return 0;
    }
    
    vector<int> vec;
    long long int product = 1;
    long long int value = 1;
    
    while(A){
        product = product * (A%10);
        vec.insert(vec.begin(), A%10);
        A = A/10;
    }
    
    unordered_map<long long int, long long int> myMap;
    
    for(int i = 0; i < vec.size(); i++){
        value = 1;
        for(int j = i; j < vec.size(); j++){
            value = value*vec[j];
            if(myMap.find(value) != myMap.end()){
                return 0;    
            }
            myMap.insert({value, value});
        }
    }
    
    
    return 1;
}
