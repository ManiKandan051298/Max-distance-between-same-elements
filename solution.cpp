int maxDistance(int arr[], int n)
{
//Code here

    map<int,int> value;
    int temp,current;
    for(int i=0;i<n;i++){
        temp=arr[i];
        current=0;
        for(int j=i+1;j<n;j++)
        {
            if(temp==arr[j]){
                current=j;
            }
        }
        if(current!=0){
        value.insert({i,current});
    }
    }
     map<int, int>::iterator itr; 
        set<int> s;
            for (itr = value.begin(); itr != value.end(); ++itr) { 
                s.insert(itr->second-itr->first);
            } 
    int answer=0;
    for (set<int>::iterator it=s.begin(); it!=s.end(); ++it)
    {    
        if(answer<*it){
            answer=*it;
        }
    }
    
    return answer;
    
    
    
}
