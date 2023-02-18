using namespace std;

int solution(vector<int> inputArray) {

    // traverse array
    
    //make pair
    //product the pairs
    // display output
    
   // sort(inputArray.begin(), inputArray.end());
    if ( !inputArray.empty()){
        
    
       vector<int>::const_iterator end = inputArray.cend() - 1;
       int temp = 0;
       int currtemp = 0;
       int result = 0;
       for (vector<int>::const_iterator it = inputArray.cbegin(); it != end; ++it){
             //cout << '(' << *it << ',' << *(it+1) << ')' << " -- ";
            temp = (*it * *(it+1));
            // cout << "temp" << temp << endl;;
            if(temp > currtemp){
                currtemp = temp;
            }
            else {
                temp = temp;
            }
   
        }
        result = max(temp,currtemp);
        
        return result;
    
    }
    
     
}
