int solution(int n) {
    
    stringstream str;
    str << n;
    string arr;
    str>>arr;
    
    char* char_array = new char[arr.length() + 1];
    strcpy(char_array, arr.c_str());
    
    int sum = 0;
    
    //arr = (int)arr - 48;
    for(int i=0; i<arr.length(); i++)
    {
        //convertion was done from ascii to int
        sum = sum + (char_array[i] -48);
        // cout << sum << endl;
        
    }
    return sum;
    
}
